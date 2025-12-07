#include <stdio.h>


int main(){
    int Abill,bill,d;
    printf("Enter bill");
    scanf("%d",&bill);

    d=(bill>1000)?10:0;
    Abill =bill - bill * d/100;
    printf("%d",Abill);

}
//imp
