# Shipping Fee

Write a program to calculate a shipping fee based on shipping mode.

Input format:
1) First line: a single character `D` or `I`.

- If the mode is `D` (Domestic), the next line contains: `weight zone`
  - `weight` is a real number (kg)
  - `zone` is an integer 1..3
  - Fee = `20 + perKg[zone] * weight`, but the minimum fee is **30**.
    - zone 1: perKg = 5
    - zone 2: perKg = 8
    - zone 3: perKg = 10

- If the mode is `I` (International), the next line contains: `weight region`
  - `weight` is a real number (kg)
  - `region` is a single character:
    - `A` = Asia (perKg = 15)
    - `E` = Europe (perKg = 20)
    - `O` = Other (perKg = 25)
  - Subtotal = `50 + perKg[region] * weight`
  - Total fee = Subtotal + 10% fuel surcharge (i.e., `Subtotal * 1.10`)

Output:
- Print the total fee with exactly 2 digits after the decimal point.

**Important**: The program must read different inputs depending on the first character.

<hr>

**Case 1 (Domestic)**

Sample input:
```
D
2.5 1
```

Sample output:
```
32.50
```

**Case 2 (International)**

Sample input:
```
I
3 E
```

Sample output:
```
121.00
```
