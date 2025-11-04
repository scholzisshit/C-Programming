// convert lower case string to upper case
#include <stdio.h>

int main(){
    char n[20];
    printf("Enter a string: ");
    fgets(n, sizeof(n), stdin);

    //convert to upper case
    //A =65, a=97--- 32

    for(int i=0; n[i]!='\0'; i++){
        if(n[i]>='a' && n[i]<='z'){
            n[i] = n[i] - 32;
        }
    }
    
    puts(n);


    return 0;
}