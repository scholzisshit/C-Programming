//nested for loop

#include <stdio.h>

int main(){

    int i,j,k,n;
    printf("Enter a number: ");
    scanf("%d",&n);

    // for (i =1;i<=n;i++){
    //     for(j=1;j<=i;j++)
    //         printf("%d",j);
    //         printf("\n");

    // }
// 1
// 12
// 123
// 1234
// 12345


// to printf
// 1
// 22
// 333
// 4444
// 55555

// for (i =1;i<=n;i++){
//         for(j=1;j<=i;j++)
//             printf("%d",i);
//             printf("\n");
//     }
    




//to print
//         1
//     2       2

// for ( i = 1; i < n; i++)
// {
//     for (k = 1; k <= 15-i; k++)
//         printf(" ");//add space
//     for (j = 1; j <= i; j++)
//         printf(" %d", i);//we added a space
//     printf("\n");
// }

// for ( i = 15; i > 0; i--)
// {
//     for (k = 1; k <= 15-i; k++)
//         printf(" ");//add space
//     for (j = 1; j <= i; j++)
//         printf("%d", i);//we added a space
//     printf("\n");
// }

//to print from 9 to 1

for ( i = 1; i < n; i++)
{
    for (k = 1; k <= 15-i; k++)
        printf(" ");
    for (j = 1; j <= i; j++)
        printf("%d", 10-i); // print from 9 to 1
    printf("\n");
}
}


