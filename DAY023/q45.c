/* Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms. */
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int numer = 2;
    int denom = 3;
    for(int i = 1; i <= n; i++) {
        sum += (double)numer / denom;
        numer += 2;
        denom += 4;
    }

    printf("Sum = %.6g\n", sum);
    return 0;
}
