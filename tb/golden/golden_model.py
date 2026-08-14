#!/usr/bin/env python3
"""Numpy reference model for what src/tpu_top.sv is *supposed* to compute for
one 4x4 tile: out = requantize(relu(A @ W + bias)).

This models the correct, intended math - not today's RTL, which (per
KNOWN_ISSUES.md) currently only gets a fraction of this data to an
observable pin. Keeping this model "textbook correct" makes it a real
regression target: as the open bugs get fixed, more of what this function
predicts should start matching the chip's actual output.
"""
import numpy as np


def compute_tile(weight: np.ndarray, activation: np.ndarray, bias: np.ndarray, shift: int) -> np.ndarray:
    """weight, activation: 4x4 int8-range arrays (W[k][n], A[m][k]).
    bias: length-4 int32-range array, one per output column.
    shift: requant right-shift amount (arithmetic, matches ins >>> con).
    Returns: 4x4 int8 array, out[m][n] = requantized(relu(sum_k A[m][k]*W[k][n] + bias[n])).
    """
    weight = weight.astype(np.int64)
    activation = activation.astype(np.int64)
    bias = bias.astype(np.int64)

    product = activation @ weight  # product[m][n] = sum_k A[m][k]*W[k][n]
    biased = product + bias[np.newaxis, :]
    relu_out = np.maximum(biased, 0)
    shifted = arithmetic_shift_right(relu_out, shift)
    return saturate_int8(shifted)


def arithmetic_shift_right(x: np.ndarray, shift: int) -> np.ndarray:
    """Matches requant.sv's `ins[i] >>> con` on a signed 32-bit value."""
    x32 = x.astype(np.int64)
    return x32 >> shift if shift > 0 else x32


def saturate_int8(x: np.ndarray) -> np.ndarray:
    return np.clip(x, -128, 127).astype(np.int64)
