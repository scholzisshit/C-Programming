#include <stdio.h>

int swap(int *x, int *y);  // Declaration with pointers, void return

int main() {
    int a = 20, b = 30;
    printf("Before: %d %d\n", a, b);
    swap(&a, &b);  // Pass addresses for reference
    printf("After: %d %d\n", a, b);
    return 0;
}

int swap(int *x, int *y) {  // Definition uses pointers
    int temp = *x;  // Store value at x's address
    *x = *y;        // Copy y's value to x's address
    *y = temp;      // Copy temp to y's address
}
