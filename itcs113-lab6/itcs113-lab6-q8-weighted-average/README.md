# Weighted Average from Two Arrays

Read an integer `n`, then read:
- `n` scores (integers)
- `n` weights (integers)

Compute the weighted average:

`avg = (sum(scores[i] * weights[i])) / (sum(weights[i]))`

Print the result with **2 digits after the decimal point**.

## Input
- First line: integer `n` (1 ≤ n ≤ 50)
- Second line: `n` integers (scores)
- Third line: `n` integers (weights), all weights are positive

## Output
Print the weighted average with 2 decimal places.

## Example
Input:
```
3
10 20 30
1 1 2
```

Output:
```
22.50
```
