# Checker Triangle

Write a program that reads an integer `n` and prints a triangle of height `n`.

For each position `(i, j)` in the triangle (row `i`, column `j`, starting from 1):

- Print `*` if `(i + j)` is even
- Print `-` if `(i + j)` is odd

Row `i` contains exactly `i` characters.

## Input
One integer `n` (`1 <= n <= 30`).

## Output
`n` lines forming the pattern.

## Example
Input
```
5
```

Output
```
*
-*
*-*
-*-*
*-*-*
```
