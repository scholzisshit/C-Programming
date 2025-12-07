#include <stdio.h>

//x^1/1! + x^2/2! + x^3/3! + .....+ x^n/n!


    int fact(int n){
        int i,f=1;
        for(i=1;i<=n;i++)f*=i;
        return f;
    }
    int power(int x, int n){
        int i,p=1;
        for(i=1;i<=n;i++)p*=x;
        return p;
    }



    // for(int i=1; i<=n; i++){
        
        //calculate factorial
    //     int fact=1;
    //     for(int j=1; j<=i; j++){
    //         fact *= j;
    //     }
        
        
        //calculate term
    //     term = 1.0;
    //     for(int k=1; k<=i; k++){
    //         term *= x;
    //     }
    //     term = term / fact;
    //     sum += term;
    // }

int main(){
    int x, n;
    float sum;int p,q;
    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);
    for(int i=1;i<=n;i++){
        p=power(x,i);
        q=fact(i);
        sum+= (float)p/q;
    }


    printf("Sum of the series: %.2f\n", sum);
    return 0;
}