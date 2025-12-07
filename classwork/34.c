#include <stdio.h>

int main (){
    int a =20 ,b=30;
    int swap (int, int);
    swap(a,b);
    printf("%d\t%d\t",a,b);
    
}

int swap (int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}