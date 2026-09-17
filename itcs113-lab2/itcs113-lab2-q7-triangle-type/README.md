# Triangle Type

Write a program that receives three positive integers `a b c` representing side lengths and prints the triangle type.

Print exactly one of:
- `invalid` (cannot form a triangle)
- `equilateral`
- `isosceles`
- `scalene`

Hint:
- A triangle is valid if the sum of any two sides is strictly greater than the remaining side.
- An `equilateral` triangle has all sides equal.
- An `isosceles` triangle has exactly two sides equal.
- A `scalene` triangle has all sides different.

<hr>

**Case 1 (all sides different)**

Sample input:
```
3 4 5
```

Sample output:
```
scalene
```

**Case 2 (fails triangle inequality)**

Sample input:
```
1 2 3
```

Sample output:
```
invalid
```
