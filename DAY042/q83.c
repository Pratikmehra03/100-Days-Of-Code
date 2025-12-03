/* Count vowels and consonants in a string. */
#include <stdio.h>

int main() {
    char s[200];
    int v = 0, c = 0;

    printf("Enter string: ");
    gets(s);

    for(int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            v++;
        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            c++;
    }

    printf("Vowels = %d\nConsonants = %d\n", v, c);
    return 0;
}
