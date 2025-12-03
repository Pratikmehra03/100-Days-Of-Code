/* Find the longest word in a sentence. */
#include <stdio.h>

int main() {
    char s[300];
    printf("Enter sentence: ");
    gets(s);

    int maxLen = 0, currLen = 0;
    char longest[100], temp[100];
    int t = 0;

    for(int i = 0; ; i++) {
        if(s[i] != ' ' && s[i] != '\0') {
            temp[t++] = s[i];
            currLen++;
        } else {
            temp[t] = '\0';
            if(currLen > maxLen) {
                maxLen = currLen;
                strcpy(longest, temp);
            }
            currLen = 0;
            t = 0;
            if(s[i] == '\0') break;
        }
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
