#include<stdio.h>

int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    (n%2==0)?printf("even"):
        printf("odd");
}

//(n%4)? printf('leap'):printf("not leap");
