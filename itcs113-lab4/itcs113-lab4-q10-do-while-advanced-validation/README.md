# Complicated Input Validation (Do-While)

Write a program that keeps reading integers until it gets a **valid** integer `x`.

A valid `x` must satisfy **all** conditions below:

1. `10 <= x <= 999`
2. `x` is **divisible by 7** OR **ends with digit 3**
3. `x` does **not** end with digit 0 (i.e., `x % 10 != 0`)

Your program must use a **do-while loop** for the validation.

After reading a valid `x`, print one line:

`x count digitSum`

- `count` is the number of integers read (including the valid one)
- `digitSum` is the sum of all digits in `x`

<hr>

**Case 1**

Sample input:
```
203
```
Sample output:
```
203 1 5
```

**Case 2**

Sample input:
```
5 1000 140 147
```
Sample output:
```
147 4 12
```

**Case 3**

Sample input:
```
13
```
Sample output:
```
13 1 4
```
