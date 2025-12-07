#include <stdio.h>
int main() {
    int c = 1, sum = 0;
    while (c <= 100) {
        printf("\t%d", c);
        sum = sum + c;
        c++;
    }
    printf("\nSum = %d\n", sum); // Added newline and fixed missing semicolon
    return 0;
}


