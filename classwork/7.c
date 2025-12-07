#include <stdio.h>
int main(){
    int bill,d=0,fbill;
    printf("Enter bill amt:");
    scanf("%d",&bill);
    if(bill>1000)
    d=10;
fbill=bill-bill*d/100;
printf("%d",fbill);

}
