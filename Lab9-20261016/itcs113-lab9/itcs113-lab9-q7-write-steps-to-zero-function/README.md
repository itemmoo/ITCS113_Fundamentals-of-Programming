# Write the Function Prototype and Definition: Steps to Zero

Complete the program by writing the function prototype and function definition for:

```c
int steps_to_zero(int n);
```

The function must count how many steps are needed to reduce `n` to `0` using these rules:
- if `n` is even, divide it by `2`
- otherwise, subtract `1`

Repeat until `n` becomes `0`.

The given program reads one integer and prints the answer.

## Input
One non-negative integer `n`.

## Output
Print the result in this format:
```
steps: <count>
```

## Sample
### Sample Input
```
10
```

### Sample Output
```
steps: 5
```
