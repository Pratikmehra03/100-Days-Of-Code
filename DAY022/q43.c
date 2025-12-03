/* Write a program to check if a number is a strong number. */
#include <stdio.h>

int fact(int x) {
    int f = 1;
    for(int i = 2; i <= x; i++) f *= i;
    return f;
}

int main() {
    int n, temp, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    while(temp > 0) {
        int d = temp % 10;
        sum += fact(d);
        temp /= 10;
    }

    if(sum == n) printf("Strong Number\n");
    else printf("Not Strong\n");

    return 0;
}
