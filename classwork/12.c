//calculater
#include <stdio.h> 
#include <stdlib.h>

int main(){

    char ch;
    int a,r,b;

    printf("enter simple eq:");
    scanf("%d %c %d",&a,&ch,&b);
    switch (ch)
    {
    case '+':
        r=a+b;
        break;
    case '*':
        r=a*b;
        break;
    case '-':
        r=a-b;
        break;
    case '/':
        r=a/b;
        break;
    default:
    printf("invalid Eq");
        exit(1);
    }
    printf("Result=%d",r);
}