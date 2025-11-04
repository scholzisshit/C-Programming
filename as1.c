#include <stdio.h>

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("Number is POSITIVE\n");
    }
    else if (num < 0) {
        printf("Number is NEGATIVE\n");
    }
    else {
        printf("Number is ZERO\n");
    }

    return 0;
}
