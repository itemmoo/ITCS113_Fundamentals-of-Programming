# Combined Array Report (Two Arrays + Nested Loops)

You are given two arrays:
- `R` of length `r` (row offsets)
- `C` of length `c` (column offsets)

Construct a matrix `M` of size `r × c` where:
`M[i][j] = R[i] + C[j]`

Then:
1. Print the matrix (`r` lines, `c` integers per line).
2. Print two more lines:
   - `min = <minimum value in M>`
   - `max = <maximum value in M>`

## Input
- First line: integers `r` and `c` (1 ≤ r, c ≤ 20)
- Second line: `r` integers (R)
- Third line: `c` integers (C)

## Output
- First `r` lines: the matrix, values separated by a single space
- Then 2 lines: `min = ...` and `max = ...`

## Example
Input:
```
2 3
1 10
5 -2 0
```

Output:
```
6 -1 1
15 8 10
min = -1
max = 15
```
