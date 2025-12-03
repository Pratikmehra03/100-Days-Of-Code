/* Print the initials of a name. */
#include <stdio.h>

int main() {
    char s[200];
    printf("Enter full name: ");
    gets(s);

    if(s[0] != ' ')
        printf("%c", s[0]);

    for(int i = 1; s[i] != '\0'; i++)
        if(s[i] == ' ' && s[i+1] != ' ')
            printf("%c", s[i+1]);

    printf("\n");
    return 0;
}
