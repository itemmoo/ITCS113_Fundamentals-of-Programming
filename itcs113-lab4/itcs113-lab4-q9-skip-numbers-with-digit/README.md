# Skip Numbers That Contain a Digit

Write a program that reads two integers `n` and `d` where `n >= 1` and `0 <= d <= 9`.

Print all integers from `1` to `n` **except** those whose decimal representation contains the digit `d`. You MUST use the `continue` statement to do this.

- Print the remaining numbers on one line.
- Use exactly one space between numbers.
- No trailing space.
- If no number is printed, output `NONE`.

<hr>

**Case 1**

Sample input:
```
20 1
```
Sample output:
```
2 3 4 5 6 7 8 9 20
```

**Case 2**

Sample input:
```
10 0
```
Sample output:
```
1 2 3 4 5 6 7 8 9
```

**Case 3**

Sample input:
```
5 5
```
Sample output:
```
1 2 3 4
```

**Case 4**

Sample input:
```
1 1
```
Sample output:
```
NONE
```
