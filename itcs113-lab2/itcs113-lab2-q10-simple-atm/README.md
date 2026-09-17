# Simple ATM Menu

Write a program that simulates a simple ATM using `switch`.

Input format:
- Line 1: initial balance (real number)
- Line 2: option (integer)
  - 1 = Deposit
  - 2 = Withdraw
  - 3 = Check balance
- If option is 1 or 2, Line 3 contains the amount (real number).

Rules:
- Deposit: add amount to balance and print the new balance.
- Withdraw: if amount is greater than balance, print `Insufficient funds` (exactly).
  Otherwise subtract and print the new balance.
- Check balance: print the current balance.
- Any other option: print `Invalid option`.

Output:
- For successful operations (deposit/withdraw) and for checking balance, print the balance with exactly 2 digits after the decimal point.

<hr>

**Case 1 (withdraw too much)**

Sample input:
```
200
2
250
```

Sample output:
```
Insufficient funds
```

**Case 2 (check balance)**

Sample input:
```
0
3
```

Sample output:
```
0.00
```
