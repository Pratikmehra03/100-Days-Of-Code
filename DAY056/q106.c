/* Write a program to take an array arr[] of integers as input, 
   the task is to find the next greater element for each element of the array 
   in order of their appearance in the array. 
   Next greater element of an element is the nearest element on the right which is greater. 
   If not present, print -1. 
   Print output comma separated.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: "); 
    scanf("%d", &n);

    int a[300];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        int next = -1;
        for(int j = i+1; j < n; j++) {
            if(a[j] > a[i]) { next = a[j]; break; }
        }
        if(i > 0) printf(",");
        printf("%d", next);
    }

    return 0;
}
