# Member Discount + Shipping

Write a program that reads two integers:

- `price` : the item price (baht)
- `member` : `1` if the customer is a member, `0` otherwise

Rules:

1. If `member == 1`, the customer gets **100 baht discount**.
2. After applying the discount, determine the shipping fee:
   - If `price >= 500`, shipping fee is `0`
   - Else, shipping fee is `50`

Print the **final amount to pay** = `price + shipping_fee`.

Assume the input always makes the final `price` non-negative.

<hr>

Sample input:
```
450 1
```

Sample output:
```
400
```
Explanation: member discount makes price = 350, shipping = 50, total = 400.
