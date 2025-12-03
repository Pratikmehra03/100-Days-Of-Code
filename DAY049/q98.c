/* Print initials with surname in full. */
#include <stdio.h>

int main() {
    char s[200];
    printf("Enter full name: ");
    gets(s);

    int lastSpace = -1;
    for(int i = 0; s[i] != '\0'; i++)
        if(s[i] == ' ')
            lastSpace = i;

    for(int i = 0; i < lastSpace; i++)
        if(i == 0 || s[i-1] == ' ')
            printf("%c.", s[i]);

    printf(" %s\n", &s[lastSpace+1]);

    return 0;
}
