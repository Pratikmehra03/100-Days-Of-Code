/* Write a Program to take an array of integers as input, 
   calculate the pivot index of this array. 
   The pivot index is the index where the sum of all the numbers strictly to the left of the index 
   is equal to the sum of all the numbers strictly to the index's right. 
   Print the leftmost pivot index. 
   If no such index exists, print -1.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: "); 
    scanf("%d", &n);

    int a[200];
    long total = 0;

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }

    long left = 0;
    for(int i = 0; i < n; i++) {
        if(left == total - left - a[i]) {
            printf("%d\n", i);
            return 0;
        }
        left += a[i];
    }

    printf("-1\n");
    return 0;
}
