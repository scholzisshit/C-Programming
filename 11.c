#include <stdio.h>

int main(){
    int n;
    printf("Enter no:");
    scanf("%d",&n);
    switch(n){
    case 1:
    printf("hello");
    break;
    case 2:
    printf("hi");
    break;
    case 3:
    printf("bye");
    break;
    default:
    printf("good");
    }
}