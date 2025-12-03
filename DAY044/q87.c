/* Count spaces, digits, and special characters in a string. */
#include <stdio.h>

int main() {
    char s[200];
    int spaces = 0, digits = 0, special = 0;

    printf("Enter string: ");
    gets(s);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == ' ') spaces++;
        else if(s[i] >= '0' && s[i] <= '9') digits++;
        else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            continue;
        else special++;
    }

    printf("Spaces = %d\nDigits = %d\nSpecial = %d\n", spaces, digits, special);
    return 0;
}
