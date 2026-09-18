## Delete a Column

Write a program that deletes one column from a matrix.

The program reads:
1. `n` rows and `m` columns
2. The `n × m` matrix
3. An integer `k` (0-based), the column index to delete (`0 <= k < m`)

Then print the new `n × (m-1)` matrix.

If `m-1` becomes `0`, print an empty line for each row.

<hr>

**Input**
```
n m
(matrix n lines)
k
```

**Output**

Print the updated matrix (each row on its own line, space after each number).
