// #include <stdio.h>

// int main() {
//     int n;
//     int sum = 0;

//     do {
//         scanf("%d", &n);
//     } while (n <= 0);

//     for (; n > 0; n = n / 10) {
//         sum = sum + (n % 10);
//     }

//     printf("%d\n", sum);

//     return 0;
// }

// #include <stdio.h>

// int main() {``
//     int n;
//     scanf("%d", &n);

//     // Handle 0 directly
//     if (n == 0) {
//         printf("0\n");
//         return 0;
//     }

//     // Handle negative numbers if any
//     if (n < 0) {
//         printf("- ");
//         n = -n;
//     }

//     // Find the place value of the leftmost digit (e.g., 1000 for 1234)
//     int divisor = 1;
//     while (n / divisor >= 10) {
//         divisor *= 10;
//     }

//     // Extract and print digits from left to right
//     while (divisor > 0) {
//         int digit = n / divisor;
//         printf("%d ", digit);
        
//         n %= divisor;       // Remove the printed digit
//         divisor /= 10;      // Move to the next place value
//     }

//     printf("\n");
//     return 0;
// }

#include <stdio.h>