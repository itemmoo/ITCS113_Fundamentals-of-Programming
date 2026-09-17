# Prime Marker Table

Write a program that reads an integer `n` and prints a table with `n` rows and `n` columns.

Fill the table with numbers from `1` to `n*n` in row-major order:

- Row 1: `1 2 3 ... n`
- Row 2: `n+1 ... 2n`
- ...
- Row n: `n*(n-1)+1 ... n*n`

For each number:
- If it is a prime number, print `P`
- Otherwise, print the number itself

Separate outputs in the same row with exactly one space.

## Input
One integer `n` (`1 <= n <= 20`).

## Output
`n` lines, each with `n` tokens (either an integer or `P`).

## Example
Input
```
4
```

Output
```
1 P P 4
P 6 P 8
9 10 P 12
P 14 15 16
```
