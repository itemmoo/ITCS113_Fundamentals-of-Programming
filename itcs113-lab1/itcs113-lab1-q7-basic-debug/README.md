# Debugging Challenge: Secret ASCII Bonus

## Instruction

You are given the following C program that is supposed to:

1. Read:
   - A **character** code `gradeCode` (for example: `A`, `B`, `C`)
   - Two **floating-point** scores: `score1` and `score2`
2. Compute the **average** of the two scores.
3. Convert the character to its **ASCII code** and use it to compute a **bonus**:
   - `bonus = (ascii_code % 10) / 10.0`
4. Compute the **final score** as:
   - `final = average + bonus`
5. Print:
   - The ASCII code
   - The bonus (2 decimal places)
   - The final score (2 decimal places)

However, the program contains **multiple bugs**.

```c
```c
#include <stdio.h>

int main() {
    int gradeCode;
    float score1, score2;
    float average;
    int bonus;
    float final;

    printf("Enter grade code and two scores:\n");
    scanf("%d", &gradeCode);
    scanf("%f %f", score1, score2);

    average = (score1 + score2) / 2;
    bonus = gradeCode % 10 / 10;
    final = average + bonus;

    printf("ASCII: %c\n", gradeCode);
    printf("Bonus: %.2f\n", bonus);
    printf("Final: %.2f\n", final);

    return 0;
}
```

Your tasks:

1. Compile and run this program with the test inputs below.
2. Observe and explain what is wrong with the outputs.
3. Identify all bugs in the code (types, format specifiers, expressions, etc.).
4. Fix the program so that it produces the correct outputs for all test cases.

You should only use the concepts you have learned:

- char, int, float
- ASCII codes
- scanf and printf
- arithmetic and casting
- operator precedence
- %.2f formatting

## Examples

### Example 1

Input:

```plaintext
A
10.0 20.0
```

Expected output:

```plaintext
ASCII: 65
Bonus: 0.50
Final: 15.50
```

### Example 2

Input:

```plaintext
5
5.0 15.0
```

Expected output:

```plaintext
ASCII: 53
Bonus: 0.30
Final: 10.30
```
