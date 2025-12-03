/* Write a program that reads text from input.txt, 
   converts all lowercase letters to uppercase, 
   and writes the result to output.txt.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    if(in == NULL) {
        printf("input.txt not found.\n");
        return 0;
    }

    out = fopen("output.txt", "w");

    while((ch = fgetc(in)) != EOF) {
        if(ch >= 'a' && ch <= 'z')
            ch = ch - 32;
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Converted and saved to output.txt\n");
    return 0;
}
