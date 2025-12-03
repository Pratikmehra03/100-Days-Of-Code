/* Count characters in a string without using built-in length functions. */
#include <stdio.h>

int main() {
    char s[200];
    int count = 0;

    printf("Enter string: ");
    gets(s);

    while(s[count] != '\0')
        count++;

    printf("Length = %d\n", count);
    return 0;
}
