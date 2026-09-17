# Calculate the EV Car Charging

## Instructions

Write a program to calculate (1) the number of hours required to fully charge an electric vehicle, and (2) the total electricity cost.

Requirements:

1. The inputs are the battery capacity of the car (kW) and the charging rate (kW/hr).
2. Assume the battery must be charged from 0% to full 100% of its capacity.
3. The electricity price is fixed at 4.5 baht per kW.
4. The outputs must be shown with 2 decimal places. You may use the round function, for example:
round(x, 2) rounds the value of x to 2 decimal places.

*Hint* Use `printf("%.2f", value);` to output 2 decimal places.

## Examples

### Example 1

Input:

```plaintext
45
7.4
```

Expected output:

```plaintext
6.08
202.5
```

### Example 2

Input:

```plaintext
10.7
3.7
```

Expected output:

```plaintext
2.89
48.15
```
