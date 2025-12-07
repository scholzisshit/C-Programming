#include <stdio.h>

int main() {
    float bill, discounted_bill;

    printf("Enter the bill amount: ");
    scanf("%f", &bill);

    if (bill > 1000) {
        discounted_bill = bill - (bill * 0.10);
        printf("You get a 10%% discount!\n");
        printf("Amount to be paid after discount: %.2f\n", discounted_bill);
    } else {
        printf("No discount applied. Amount to be paid: %.2f\n", bill);
    }

    return 0;
}
