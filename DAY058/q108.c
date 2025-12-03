/* Write a Program to take an integer array nums. 
   Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. 
   The product must fit in 32-bit integer.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[200];
    long left[200], right[200];

    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    left[0] = 1;
    for(int i = 1; i < n; i++)
        left[i] = left[i-1] * a[i-1];

    right[n-1] = 1;
    for(int i = n-2; i >= 0; i--)
        right[i] = right[i+1] * a[i+1];

    for(int i = 0; i < n; i++) {
        printf("%ld ", left[i] * right[i]);
    }

    return 0;
}
