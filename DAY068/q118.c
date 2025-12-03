/* Write a program to take an input array of size n. 
   The array should contain all the integers between 0 to n except for one. 
   Print that missing number.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[1000];
    long sum = 0;

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    long total = (long)n * (n + 1) / 2;

    printf("%ld\n", total - sum);
    return 0;
}
