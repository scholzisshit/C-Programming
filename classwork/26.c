//wap to calculate total. no of vowels words in a string
#include <stdio.h>

int main(){
    char n[100];
    int vowels=0, words=1;
    
    printf("Enter a string: ");
    fgets(n, sizeof(n), stdin);

    for(int i=0; n[i]!='\0'; i++){
        if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u' ||
           n[i]=='A' || n[i]=='E' || n[i]=='I' || n[i]=='O' || n[i]=='U'){
            vowels++;
        }



        //count words
        if(n[i]==' ' || n[i]=='/n' || n[i]=='/t'){
            words++;
        }
    }

    printf("Total Vowels: %d\n", vowels);
    printf("Total Words: %d\n", words);

    return 0;



}
