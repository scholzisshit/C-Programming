// a num is inputed find how many digits

// #include <stdio.h>
// int main(){
//     int c = 0,n;
//     printf("Enter a num:");
//     scanf("%d",&n);
//     while (n>0)
//     {
//         n = n/10;
//         c++;
//     }
    
//     printf("The num of digits is %d",c);
//     return 0;
// }


#include <stdio.h>
int main() {
    long int c = 0, n;
    printf("Enter a num: ");
    scanf("%ld", &n);

    if (n == 0) {
        c = 1;  
    } else {
        if (n < 0) {
            n = -n;  
        }
        while (n != 0) {
            n = n / 10;
            c++;
        }
    }

    printf("The number of digits is %d\n", c);
    return 0;
}

