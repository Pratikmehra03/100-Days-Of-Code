/* Write a program to take a string s as input. 
   The task is to find the length of the longest substring without repeating characters. 
   Print the length as output.
*/
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter string: ");
    scanf(" %[^\n]", s);

    int best = 0;

    for(int i = 0; s[i] != '\0'; i++) {
        int freq[256] = {0};
        int len = 0;

        for(int j = i; s[j] != '\0'; j++) {
            if(freq[(unsigned char)s[j]]) break;
            freq[(unsigned char)s[j]] = 1;
            len++;
        }

        if(len > best) best = len;
    }

    printf("%d\n", best);
    return 0;
}
