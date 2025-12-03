/* Write a Program to take a positive integer n as input, 
   and find the pivot integer x such that the sum of all elements between 1 and x inclusively 
   equals the sum of all elements between x and n inclusively. 
   Print the pivot integer x. 
   If no such integer exists, print -1.
*/
#include <stdio.h>
#include <math.h>

int main() {
    long n;
    printf("Enter n: ");
    scanf("%ld", &n);

    long total = n * (n + 1) / 2;
    double x = sqrt(total);

    if(x == (long)x) 
        printf("%ld\n", (long)x);
    else 
        printf("-1\n");

    return 0;
}
