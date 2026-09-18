## Insert a Column

Write a program that inserts a new column into a matrix.

The program reads:
1. `n` rows and `m` columns
2. The `n × m` matrix
3. An integer `k` (0-based), the position to insert the new column  
   - `k = 0` means insert as the first column  
   - `k = m` means insert as the last column
4. `n` integers: the values of the new column (top to bottom)

Then print the new `n × (m+1)` matrix.

<hr>

**Input**
```
n m
(matrix n lines)
k
c1 c2 ... cn   (n integers)
```

**Output**

Print the updated matrix (each row on its own line, space after each number).
