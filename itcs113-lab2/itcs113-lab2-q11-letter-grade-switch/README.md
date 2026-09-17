# Letter Grade (Switch)

Write a program that receives an integer score (0-100) and prints a letter grade using `switch`.

Grading:
- 90-100: `A`
- 80-89: `B`
- 70-79: `C`
- 60-69: `D`
- 0-59: `F`

If the score is outside 0-100, print `Invalid`.

**Hint**: You can use `switch(score/10)` and handle the special case of 100.

<hr>

**Case 1 (A range)**

Sample input:
```
95
```

Sample output:
```
A
```

**Case 2 (out of range)**

Sample input:
```
101
```

Sample output:
```
Invalid
```
