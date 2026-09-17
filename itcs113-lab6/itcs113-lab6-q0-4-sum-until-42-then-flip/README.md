# Sum Until Greater Than 42, Then Flip

Read integers one by one and keep adding to a running sum until the sum becomes **greater than 42**.

After stopping:
1. Print the number of values read.
2. Print the final sum.
3. Print the values you read in **reverse order** (this is the “flip array” part).

## Input
A sequence of integers (at least one). You may assume the sum will eventually become greater than 42.

## Output
Three lines:
1. `count`
2. `sum`
3. the values in reverse order, separated by a single space

## Example
Input:
```
10 20 5 9
```

Running sum: 10, 30, 35, 44 (stop)

Output:
```
4
44
9 5 20 10
```
