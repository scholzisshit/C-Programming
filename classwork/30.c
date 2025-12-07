#include <stdio.h>
void main(){
int a=10,b=20;
int swap(int*,int*);
swap(&a,&b);
printf("%d %d",a,b);
}
int swap(int *x, int *y)
{
int z;
z=*x;
*x=*y;
*y=z;
}