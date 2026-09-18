## Matrix × Vector

Write a program that computes the multiplication of a matrix by a vector.

Given:
- Matrix `A` of size `n × m`
- Vector `v` of length `m`

Compute the result vector `r` of length `n`:

`r[i] = A[i][0]*v[0] + A[i][1]*v[1] + ... + A[i][m-1]*v[m-1]`

<hr>

**Input**
```
n m
(matrix n lines)
v1 v2 ... vm
```

**Output**

Print `n` integers, each followed by a space, on one line.
