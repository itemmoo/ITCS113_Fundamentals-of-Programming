# First Divisor or PRIME

Write a program that reads an integer `n` (`n >= 2`).

Find the smallest divisor `d` of `n` such that `d > 1`.
- If such a divisor exists and `d < n`, print `d`.
- Otherwise, `n` is prime, print `PRIME`.

Use a loop that checks candidate divisors starting from `2` and **break** as soon as the first divisor is found.

IMPORTANT: You must use the `break` statement.

<hr>

**Case 1**

Sample input:
```
15
```
Sample output:
```
3
```

**Case 2**

Sample input:
```
49
```
Sample output:
```
7
```

**Case 3**

Sample input:
```
13
```
Sample output:
```
PRIME
```
