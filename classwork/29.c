#include <stdio.h>

int main (){
    int i =2,*x;
    x=&i;
    printf("%d\t%d\t%d\t",i,*x,*(&i));



}