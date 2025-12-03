/* Write a program to take an integer array arr as input. 
   The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. 
   If all elements are negative, print the largest (least negative) element.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: "); 
    scanf("%d", &n);

    int a[500];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    int max_end = a[0], max_sum = a[0];

    for(int i = 1; i < n; i++) {
        if(max_end + a[i] < a[i]) max_end = a[i];
        else max_end += a[i];

        if(max_end > max_sum) max_sum = max_end;
    }

    printf("%d\n", max_sum);
    return 0;
}
