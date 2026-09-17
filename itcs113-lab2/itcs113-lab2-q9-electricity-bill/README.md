# Electricity Bill

Write a program that receives the number of electricity units used (kWh) and prints the total bill.

Rates (tiered):
- First 50 units: 2.00 per unit
- Next 50 units (51-100): 3.00 per unit
- Next 100 units (101-200): 4.00 per unit
- Above 200 units: 5.00 per unit

Add a fixed service fee of 30.00 to the total.

Output: print the total bill with exactly 2 digits after the decimal point.

<hr>

**Case 1 (crosses the 50-unit boundary)**

Sample input:
```
75
```

Sample output:
```
205.00
```

**Case 2 (uses all tiers)**

Sample input:
```
250.5
```

Sample output:
```
932.50
```
