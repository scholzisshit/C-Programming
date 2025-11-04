#include <stdio.h>


int main(){
    char n[20];
    printf("Enter your name: ");
    fgets(n, sizeof(n), stdin);
    
    
    puts(n);


    // printf("Your name is: %s\n", n);


    return 0;
}





// gets puts