/* Reverse each word in a sentence without changing the word order. */
#include <stdio.h>
#include <string.h>

int main() {
    char s[300], temp[100];
    printf("Enter sentence: ");
    gets(s);

    int t = 0;
    for(int i = 0; ; i++) {
        if(s[i] != ' ' && s[i] != '\0') {
            temp[t++] = s[i];
        } else {
            temp[t] = '\0';
            for(int j = t-1; j >= 0; j--)
                printf("%c", temp[j]);
            if(s[i] == ' ') printf(" ");
            t = 0;
            if(s[i] == '\0') break;
        }
    }

    return 0;
}
