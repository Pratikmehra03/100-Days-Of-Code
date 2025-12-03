/* Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms. */
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int num = 1, den = 1;
    for(int i = 1; i <= n; i++) {
        den = den +  (i==1 ? 0 : 3); 
        if(i == 1) sum += 1.0;
        else {
            double numer = 2*i - 1;
            double denom = 2*i;
            sum += numer/denom;
        }
    }

    printf("Sum = %.6g\n", sum);
    return 0;
}
