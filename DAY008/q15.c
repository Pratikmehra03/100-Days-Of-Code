/* Write a program to check if a character is uppercase, lowercase, digit or special character. */
#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);

    if(c >= 'A' && c <= 'Z')
        printf("Uppercase\n");
    else if(c >= 'a' && c <= 'z')
        printf("Lowercase\n");
    else if(c >= '0' && c <= '9')
        printf("Digit\n");
    else
        printf("Special Character\n");

    return 0;
}
