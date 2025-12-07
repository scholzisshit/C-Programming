//two dimentional arrays
#include <stdio.h>

int main() {
    int r,c;
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for(int r=0; r<3; r++) {
        for(int c=0; c<3; c++) {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }








    return 0;
}