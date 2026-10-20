# Refactor Shipping Cost Calculation into Functions

A shipping program needs to calculate the delivery cost from the package `weight` and `distance`.

Refactor the logic into the following functions:

```c
int base_cost(int weight, int distance);
int surcharge(int weight);
int final_cost(int weight, int distance);
```

Use these rules:
- `base_cost = weight * 10 + distance * 2`
- `surcharge = 50` if `weight > 20`, otherwise `0`
- `final_cost = base_cost + surcharge`

## Requirements
- Read two integers: `weight` and `distance`
- Use the functions above to compute the answer
- Print exactly three lines:
```
base: <value>
surcharge: <value>
total: <value>
```

## Sample
### Sample Input
```
12 15
```

### Sample Output
```
base: 150
surcharge: 0
total: 150
```
