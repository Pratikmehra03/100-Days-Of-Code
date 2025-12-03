/* Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
   The task is to determine if s and t are valid anagrams, 
   meaning they contain the same characters with the same frequencies. 
   Print "Anagram" if they are, otherwise "Not Anagram".
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s1[500], s2[500];
    printf("Enter first string: ");
    scanf(" %[^\n]", s1);
    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    int f[26] = {0};

    for(int i = 0; s1[i] != '\0'; i++)
        f[s1[i] - 'a']++;

    for(int i = 0; s2[i] != '\0'; i++)
        f[s2[i] - 'a']--;

    for(int i = 0; i < 26; i++)
        if(f[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }

    printf("Anagram\n");
    return 0;
}
