#include <stdio.h>

int main() {
    // sum of diagnal elements of a matrix
    int r, c,s1,s2;
    int arr[3][3];
    int sum = 0;
    printf("Enter elements of the array:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            scanf("%d", &arr[r][c]);

            if (r == c) {
                s1 += arr[r][c];
            }
            
            for (r = 0;c=2;r<3;r++,c--){
                s2 += arr[r][c];

            }

            sum = s1 + s2;
            printf("Sum of primary diagonal elements: %d\n", s1);
            printf("Sum of secondary diagonal elements: %d\n", s2); 
            printf("\n%d Sum of all diagonal elements", sum);

        }
    }
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;