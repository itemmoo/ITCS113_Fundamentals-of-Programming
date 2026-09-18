## Matrix × Matrix

Write a program that computes the multiplication of two matrices.

Given:
- Matrix `A` of size `n × m`
- Matrix `B` of size `m × p`

Compute `C = A × B` of size `n × p` where:

`C[i][j] = sum_{k=0..m-1} A[i][k] * B[k][j]`

<hr>

**Input**
```
n m p
A (n lines, each with m integers)
B (m lines, each with p integers)
```

**Output**

Print matrix `C` (n lines, space after each number).
