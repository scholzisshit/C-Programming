#include <stdio.h>

int fact(int x);

int main(){
    int n, f;
    printf("Enter a number: ");
    scanf("%d", &n);
    f = fact(n);
    printf("%d\n", f);
    return 0;
}

int fact(int x){
    if (x == 1 || x == 0)
        return 1;
    return x * fact(x - 1);
}


