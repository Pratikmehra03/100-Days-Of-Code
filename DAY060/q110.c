/* Write a program to take an integer array arr and an integer k as inputs. 
   The task is to find the maximum element in each subarray of size k 
   moving from left to right. 
   Print the maximum elements for each window separated by spaces.
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

    for(int i = 0; i <= n-k; i++) {
        int mx = a[i];
        for(int j = i+1; j < i+k; j++)
            if(a[j] > mx) mx = a[j];

        printf("%d ", mx);
    }

    return 0;
}
