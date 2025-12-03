/* Convert a lowercase string to uppercase without using built-in functions. */
#include <stdio.h>

int main() {
    char s[200];
    printf("Enter string: ");
    gets(s);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }

    printf("Uppercase: %s\n", s);
    return 0;
}
