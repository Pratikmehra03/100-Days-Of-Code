/* Count frequency of a given character in a string. */
#include <stdio.h>

int main() {
    char s[200], ch;
    int count = 0;

    printf("Enter string: ");
    gets(s);

    printf("Enter character to find frequency: ");
    scanf("%c", &ch);

    for(int i = 0; s[i] != '\0'; i++)
        if(s[i] == ch) count++;

    printf("Frequency = %d\n", count);
    return 0;
}
