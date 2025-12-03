/* Take two filenames from the user – a source file and a destination file. 
   Copy all the content from the source file to the destination file using fgetc() and fputc().
*/
#include <stdio.h>

int main() {
    char src[100], dest[100];
    FILE *f1, *f2;
    char ch;

    printf("Enter source filename: ");
    scanf(" %s", src);

    printf("Enter destination filename: ");
    scanf(" %s", dest);

    f1 = fopen(src, "r");
    if(f1 == NULL) {
        printf("Source file not found.\n");
        return 0;
    }

    f2 = fopen(dest, "w");

    while((ch = fgetc(f1)) != EOF)
        fputc(ch, f2);

    fclose(f1);
    fclose(f2);

    printf("File copied successfully.\n");
    return 0;
}
