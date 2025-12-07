#include <stdio.h>

int main() {

    int r,c;
    int arr[3][3];
    printf("Enter elements of the array:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            scanf("%d", &arr[r][c]);
        }
    }

    printf("The elements of the array are:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }
    return 0;
}