# Passing by Value

Write a program that reads one integer `x` and uses a function named `add_five`.

The function receives a copy of `x`, adds 5, and returns the new value.

Then print two lines:
1. the original value in `main`
2. the returned value from the function

This exercise shows that the original variable in `main` is not changed unless you assign the returned value back.

## Function Prototype
```c
int add_five(int x);
```

## Input
One integer `x`.

## Output
Print exactly two lines in this format:
```
original: <value>
result: <value>
```

## Sample
### Sample Input
```
12
```

### Sample Output
```
original: 12
result: 17
```
