# Hollow X Square

Write a program that reads an odd integer `n` and prints an `n × n` pattern.

Print `*` at positions that are:
- On the border (first/last row or first/last column), OR
- On either diagonal (`row == col` or `row + col == n + 1`)

Print a space `' '` everywhere else.

## Input
One odd integer `n` (`3 <= n <= 99`).

## Output
`n` lines, each with exactly `n` characters.

## Example
Input
```
5
```

Output
```
*****
** **
* * *
** **
*****
```
