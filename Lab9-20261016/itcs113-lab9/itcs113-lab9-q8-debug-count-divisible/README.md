# Debug the Existing Code: Count Divisible Numbers

The program is intended to read two integers `n` and `k`, then count how many integers from `1` to `n` are divisible by `k`.

It must use the function:

```c
int count_divisible(int n, int k);
```

However, the given code contains mistakes.
Your task is to fix the code so that it works correctly.

## Requirements
- Count the integers `i` such that `1 <= i <= n` and `i % k == 0`
- You may assume `n >= 1` and `k >= 1`
- Print the result in this format:
```
count: <value>
```

## Sample
### Sample Input
```
12 3
```

### Sample Output
```
count: 4
```
