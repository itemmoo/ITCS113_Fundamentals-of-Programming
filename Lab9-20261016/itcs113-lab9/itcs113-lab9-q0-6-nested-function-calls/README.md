# Nested Function Calls

Write a program that reads one integer `x` and uses two functions:
- `square(int x)` returns `x * x`
- `add_one(int x)` returns `x + 1`

The program must print the value of:

```
add_one(square(x))
```

This means the return value of one function is passed directly into another function.

## Input
One integer `x`.

## Output
Print one integer.

## Sample
### Sample Input
```
4
```

### Sample Output
```
17
```
