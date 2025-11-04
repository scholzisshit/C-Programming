//functions lib and user def
//math.h
//string.h
//ctype.h
//stdlib.h
//time.h
//stdio.h

//sum function
#include <stdio.h>

int sum(int x, int y){
   int t;
    t = x + y;
    return t;
    }


    int main(){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = sum(a,b);
    printf("Sum is: %d\n", c);
    return 0;
}
