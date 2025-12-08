#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;              // Store original number

    while (num != 0) {
        digit = num % 10;        // Get last digit
        reverse = reverse * 10 + digit;  // Append digit to reverse
        num = num / 10;          // Remove last digit
    }

    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", reverse);

    return 0;
}
