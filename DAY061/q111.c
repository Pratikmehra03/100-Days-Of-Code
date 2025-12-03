/* Write a program to take an integer array arr and an integer k as inputs. 
   The task is to find the first negative integer in each subarray of size k 
   moving from left to right. 
   If no negative exists in a window, print "0". 
   Print the results separated by spaces.
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
        int neg = 0;
        for(int j = i; j < i+k; j++) {
            if(a[j] < 0) { neg = a[j]; break; }
        }
        printf("%d ", neg);
    }

    return 0;
}
