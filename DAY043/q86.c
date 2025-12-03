/* Check if a string is a palindrome. */
#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    printf("Enter string: ");
    gets(s);

    int len = strlen(s), flag = 1;

    for(int i = 0; i < len/2; i++) {
        if(s[i] != s[len - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if(flag) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
