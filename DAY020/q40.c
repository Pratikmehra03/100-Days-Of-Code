/* Write a program to find the 1’s complement of a binary number. */
#include <stdio.h>

int main() {
    char bin[100];
    printf("Enter binary number: ");
    scanf("%s", bin);

    for(int i = 0; bin[i] != '\0'; i++) {
        if(bin[i] == '0') bin[i] = '1';
        else bin[i] = '0';
    }

    printf("1's Complement = %s\n", bin);
    return 0;
}
