/* Write a program to take a string input. 
   Change it to sentence case.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[500];
    printf("Enter text: ");
    fgets(s, sizeof s, stdin);

    if(s[0] == '\n') fgets(s, sizeof s, stdin);

    for(int i = 0; s[i] != '\0'; i++)
        s[i] = tolower(s[i]);

    int i = 0;
    while(s[i] != '\0' && !isalpha(s[i])) i++;

    if(s[i] != '\0')
        s[i] = toupper(s[i]);

    printf("%s", s);
    return 0;
}
