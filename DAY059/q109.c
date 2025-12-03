/* Write a program to take an integer array arr and an integer k as inputs. 
   Print the maximum sum of all the subarrays of size k.
*/
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter n: "); 
    scanf("%d", &n);

    int a[500];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    int sum = 0;
    for(int i = 0; i < k; i++) sum += a[i];
    int max = sum;

    for(int i = k; i < n; i++) {
        sum += a[i] - a[i-k];
        if(sum > max) max = sum;
    }

    printf("%d\n", max);
    return 0;
}
