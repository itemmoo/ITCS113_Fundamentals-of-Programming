# BMI Category

Write a program that receives a person's weight (kg) and height (m), computes:

```
BMI = weight / (height^2)
```

Once the BMI is calculated, determine the BMI category according to the following criteria:

- `Underweight` if BMI < 18.5
- `Normal` if 18.5 <= BMI < 25
- `Overweight` if 25 <= BMI < 30
- `Obese` if BMI >= 30

The program should print the calculated BMI (rounded to two decimal places) followed by the corresponding BMI category.

**Note**: The input always contains two positive real numbers: `weight height`.

<hr>

**Case 1 (BMI < 18.5)**

Sample input:
```
50 1.70
```

Sample output:
```
bmi=17.30
Underweight
```

**Case 2 (25 <= BMI < 30)**

Sample input:
```
80 1.70
```

Sample output:
```
80 1.7
bmi=27.68
Overweight
```
