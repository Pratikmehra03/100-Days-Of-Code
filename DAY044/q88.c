/* Replace spaces with hyphens in a string. */
#include <stdio.h>

int main() {
    char s[200];
    printf("Enter string: ");
    gets(s);

    for(int i = 0; s[i] != '\0'; i++)
        if(s[i] == ' ') s[i] = '-';

    printf("Output: %s\n", s);
    return 0;
}
