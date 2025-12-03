/* Open an existing file in append mode and allow the user to enter a new line of text. 
   Append the text at the end without overwriting existing content.
*/
#include <stdio.h>

int main() {
    FILE *fp;
    char line[300];

    fp = fopen("input.txt", "a");

    if(fp == NULL) {
        printf("File not found.\n");
        return 0;
    }

    printf("Enter text to append: ");
    scanf(" %[^\n]", line);

    fprintf(fp, "\n%s", line);

    fclose(fp);

    printf("Text appended.\n");
    return 0;
}
