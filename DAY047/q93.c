/* Check if two strings are anagrams. */
#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[200];
    int freq1[256] = {0}, freq2[256] = {0};

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    if(strlen(s1) != strlen(s2)) {
        printf("Not Anagram\n");
        return 0;
    }

    for(int i = 0; s1[i] != '\0'; i++) freq1[s1[i]]++;
    for(int i = 0; s2[i] != '\0'; i++) freq2[s2[i]]++;

    int ok = 1;
    for(int i = 0; i < 256; i++)
        if(freq1[i] != freq2[i]) ok = 0;

    if(ok) printf("Anagram\n");
    else printf("Not Anagram\n");

    return 0;
}
