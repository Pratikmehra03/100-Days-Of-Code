/* Print each character of a string on a new line. */
#include <stdio.h>

int main() {
    char s[200];
    printf("Enter string: ");
    gets(s);

    for(int i = 0; s[i] != '\0'; i++)
        printf("%c\n", s[i]);

    return 0;
}
