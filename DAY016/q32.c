/* Write a program to check if a number is a palindrome. */
#include <stdio.h>

int main() {
    int n, temp, rev = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    while(temp != 0) {
        rev = rev*10 + temp%10;
        temp /= 10;
    }

    if(rev == n)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
