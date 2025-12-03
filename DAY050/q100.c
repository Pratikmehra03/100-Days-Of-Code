/* Print all sub-strings of a string. */
#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    printf("Enter string: ");
    gets(s);

    int n = strlen(s);

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            for(int k = i; k <= j; k++)
                printf("%c", s[k]);
            printf("\n");
        }
    }

    return 0;
}
