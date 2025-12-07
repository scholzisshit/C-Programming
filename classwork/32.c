// create a function which converts lower case string to upper case?
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);  // Read input

    while (str[i] != '\0') {  // Iterate until end of string
        
        if (str[i] >= 'a' && str[i] <= 'z') {

            str[i] = str[i] - ('a' - 'A');  // Convert to uppercase
        }

        i++;
    }

    printf("Uppercase string: %s", str);
    return 0;
}
