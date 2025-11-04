/* armstrong number
    -3digit no
    -sum of cube of each digit is equal to the number itself
*/    


#include <stdio.h>
int main(){
    int num,a,b,c,d;

    for(num=100; num<=999; num++){
        a=num%10;
        d=num/10;
        b=d%10;
        c=d/10;
        if(a*a*a+b*b*b+c*c*c == num)
            printf("\n%d",num);
    }



}