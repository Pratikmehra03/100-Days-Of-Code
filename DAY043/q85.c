/* Reverse a string. */
#include <stdio.h>
#include <string.h>

int main() {
    char s[200], rev[200];
    printf("Enter string: ");
    gets(s);

    int len = strlen(s);
    for(int i = 0; i < len; i++)
        rev[i] = s[len-1 - i];
    rev[len] = '\0';

    printf("Reversed: %s\n", rev);
    return 0;
}
