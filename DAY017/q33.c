/* Write a program to check if a number is an Armstrong number. */
#include <stdio.h>

int main() {
    int n, temp, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    while(temp > 0) {
        int d = temp % 10;
        sum += d*d*d;
        temp /= 10;
    }

    if(sum == n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
