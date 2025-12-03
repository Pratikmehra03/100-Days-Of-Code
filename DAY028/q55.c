/* Write a program to print all the prime numbers from 1 to n. */
#include <stdio.h>

int isPrime(int x) {
    if(x <= 1) return 0;
    for(int i = 2; i*i <= x; i++)
        if(x % i == 0) return 0;
    return 1;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++)
        if(isPrime(i)) printf("%d ", i);

    return 0;
}
