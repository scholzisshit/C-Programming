//bubble sort in C
//accending order
#include <stdio.h>

int main(void) {
    int i, j, temp, a[10] = {1, -1, 10, 12, -11, 8, 7, -8, 9, 20};
    for (i = 0; i < 10 - 1; i++)
    {
        for (j = 0; j < 10 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}
