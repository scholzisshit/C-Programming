/*fibbonachi series

1 1 2 3 5 8

*/

#include <stdio.h>

int main() {
    int n = 10; // number till we want to make then series
    int a = 1, b = 1, c, i;
    printf("%d %d ", a, b);
    for(i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b; // shift the variables arround for the next itteration
        b = c;
    }
    return 0;
}