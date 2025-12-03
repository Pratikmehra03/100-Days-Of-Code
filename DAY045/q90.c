/* Toggle case of each character in a string. */
#include <stdio.h>

int main() {
    char s[200];
    printf("Enter string: ");
    gets(s);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
        else if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }

    printf("Toggled: %s\n", s);
    return 0;
}
