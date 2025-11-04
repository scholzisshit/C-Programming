#include <stdio.h>

int main(void) {
    int i, min, a[10];
    printf("Enter 10 integers:\n");

    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    min=a[0];

    for(i=1;i<10;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("The smallest integer is %d\n",min);
    return 0;
}