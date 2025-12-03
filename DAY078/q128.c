/* Read a text file and count how many vowels and consonants are in the file. 
   Ignore digits and special characters.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int v = 0, c = 0;

    fp = fopen("input.txt", "r");
    if(fp == NULL) {
        printf("File not found.\n");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF) {
        if(isalpha(ch)) {
            char x = tolower(ch);
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
                v++;
            else
                c++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\nConsonants: %d\n", v, c);
    return 0;
}
