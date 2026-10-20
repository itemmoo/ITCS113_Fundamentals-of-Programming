# Nested Function Calls with Loop and Conditions

Write a program that reads one positive integer `n` and determines how many steps it takes to reach `1` using the Collatz process.

Create and use these functions:

```c
/*
This function takes an integer `n` and 
returns the next value in the Collatz sequence.

Hint:
- if `n` is even, the next value is `n / 2`
- otherwise, the next value is `3 * n + 1`
*/
int next_value(int n);

/*
This function takes an integer `n` and 
returns the number of steps it takes 
to reach `1` using the Collatz process.

Hint:
- This function should use a loop and call `next_value` 
  repeatedly until it reaches `1`, counting the steps.
*/
int collatz_steps(int n);

/*
This function takes the number of steps and 
returns the corresponding level.

Hint:
- `S` if `steps <= 5`
- `M` if `steps <= 10`
- `L` otherwise
*/
char level_from_steps(int steps);
```

The program must print the result of this nested function call:

```c
level_from_steps(collatz_steps(n))
```

## Input
One positive integer `n`.

## Output
Print exactly two lines:
```
steps: <count>
level: <level>
```

## Sample
### Sample Input
```
6
```

### Sample Output
```
steps: 8
level: M
```
