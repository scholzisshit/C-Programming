#include <stdio.h>
int main(){
    int BS,GS,DA,HRA;
    printf("Enter BS:");
    scanf("%d",&BS);

    if (BS>20000)
    {
        HRA=25;
        DA=50;
    }
    else
    {
        HRA=15;
        DA=20;
    }

    GS = BS + BS * HRA / 100 + BS * DA / 100;
    printf("%d", GS);

    return 0;
}
