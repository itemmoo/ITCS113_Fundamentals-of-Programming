# Centered Palindrome Pyramid

Write a program that reads an integer `n` and prints a centered palindrome pyramid of height `n`.

For each row `i` (starting from 1):
- Print `(n - i)` leading spaces
- Then print numbers from `i` down to `1`
- Then print numbers from `2` up to `i`

Numbers are printed **without spaces**.

## Input
One integer `n` (`1 <= n <= 9`).

## Output
`n` lines forming the pyramid.

## Example
Input
```
5
```

Output
```
    1
   212
  32123
 4321234
543212345
```
