## Sum of Upper Triangle

Write a program that computes the sum of the **upper triangle** of a square matrix (including the main diagonal).

For a matrix `A` of size `n × n`, the upper triangle contains elements where column index `j` is **greater than or equal to** row index `i` (i.e., `j >= i`).

<hr>

**Input**
```
n
n lines, each with n integers
```

**Output**

Print one integer: the sum of the upper triangle.

<hr>

**Case 1**

Sample input:
```
3
1 2 3
4 5 6
7 8 9
```
Sample output:
```
26
```

(upper triangle: 1+2+3+5+6+9)
