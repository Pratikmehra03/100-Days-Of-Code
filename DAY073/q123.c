/* Read a text file and count the total number of characters, words, and lines. 
   A word is defined as a sequence of non-space characters separated by spaces or newlines.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("input.txt", "r");

    if(fp == NULL) {
        printf("File not found.\n");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF) {
        chars++;

        if(ch == '\n') lines++;

        if(ch == ' ' || ch == '\n' || ch == '\t')
            inWord = 0;
        else if(inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
