/* Write a program to take an array arr[] of integers as input, 
   the task is to find the previous greater element for each element of the array. 
   Previous greater element is nearest element on the left which is greater. 
   If none exists, print -1. 
   Print the output comma separated.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: "); 
    scanf("%d", &n);

    int a[300];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        int pg = -1;
        for(int j = i-1; j >= 0; j--) {
            if(a[j] > a[i]) { pg = a[j]; break; }
        }
        if(i > 0) printf(",");
        printf("%d", pg);
    }

    return 0;
}
