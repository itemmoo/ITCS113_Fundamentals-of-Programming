# Mixed-Type Energy Calculation

## Instruction

Write a C program that reads three inputs in the following order:

1. A float representing the energy produced by a solar panel in one hour (kW/h)
2. An int representing the number of full hours of sunlight
3. A float representing the efficiency loss factor (0–1), where the actual usable energy is
    $$
    \text{actual} = \text{energy per hour} \times \text{hours} \times (1 - \text{loss})
    $$

Your program must compute:

1. The actual usable energy as a floating-point number
2. The integer part of the energy (truncate using casting)
3. The decimal remainder (actual_energy minus its integer part)

Then print them in this exact format:

```plaintext
Actual: X.XX
Integer part: Y
Remainder: Z.ZZ
```

Requirements:

1. You must use float for floating-point values.
2. You must explicitly cast to int when extracting the integer part.
3. All floating-point outputs must be printed with 2 decimal places.
4. Only use arithmetic, variables, casting, and printf/scanf, no conditions or loops.

## Examples

### Example 1

Input:

```plaintext
1.5
10
0.2
```

Expected output:

```plaintext
Actual: 12.00
Integer part: 12
Remainder: 0.00
```

### Example 2

Input:

```plaintext
3.75
7
0.13
```

Expected output:

```plaintext
Actual: 22.84
Integer part: 22
Remainder: 0.84
```
