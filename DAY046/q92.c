/* Find the first repeating lowercase alphabet in a string. */
#include <stdio.h>

int main() {
    char s[200];
    int freq[26] = {0};
    printf("Enter string: ");
    gets(s);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i]-'a']++;
            if(freq[s[i]-'a'] == 2) {
                printf("First repeating = %c\n", s[i]);
                return 0;
            }
        }
    }

    printf("No repeating character\n");
    return 0;
}
