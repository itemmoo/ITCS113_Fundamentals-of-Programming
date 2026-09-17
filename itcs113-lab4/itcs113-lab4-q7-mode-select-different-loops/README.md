# Mode Select: Different Loops

Write a program that reads a character `mode` and an integer `n` (`n >= 1`).

- If `mode` is `W`, print numbers from `1` to `n` using a **while** loop.
- If `mode` is `F`, print numbers from `n` down to `1` using a **for** loop.
- If `mode` is `D`, print odd numbers from `1` to `n` using a **do-while** loop.

For all modes:
- Print the selected numbers on one line.
- Use exactly one space between numbers.
- No trailing space at the end of the line.

<hr>

**Case 1**

Sample input:
```
W 5
```
Sample output:
```
1 2 3 4 5
```

**Case 2**

Sample input:
```
F 4
```
Sample output:
```
4 3 2 1
```

**Case 3**

Sample input:
```
D 7
```
Sample output:
```
1 3 5 7
```

**Case 4**

Sample input:
```
D 1
```
Sample output:
```
1
```
