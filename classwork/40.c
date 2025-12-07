#include <stdio.h>

int main() {
    int r,c;
    int arr[3][3];


    for(int r=0; r<3; r++) {
        for(int c=0; c<3; c++) {
        scanf("%d", &arr[r][c]);
        }
        printf("\n");
    }

    for(int r=0; r<3; r++) {
        for(int c=0; c<3; c++) {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }







    return 0;
}