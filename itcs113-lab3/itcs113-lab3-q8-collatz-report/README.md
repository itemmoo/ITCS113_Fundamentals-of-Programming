# Collatz Report

Write a program that reads a positive integer `n` and generates the Collatz sequence:

- If `n` is even: `n = n / 2`
- If `n` is odd : `n = 3n + 1`

Continue until `n` becomes `1`.

Your program must:

1. Print the sequence on one line (including the starting number and the final `1`), separated by a single space.
2. Print `steps: X` where `X` is the number of times the rule was applied to reach `1`.
3. Print `max: Y` where `Y` is the maximum value that appeared in the sequence.

<hr>

Sample input:
```
6
```

Sample output:
```
6 3 10 5 16 8 4 2 1
steps: 8
max: 16
```
