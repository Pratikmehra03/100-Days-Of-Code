/* Write a program to take an integer array arr and an integer k as inputs. 
   The task is to find the kth smallest element in the array. 
   Print the kth smallest element as output.
*/
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[300];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

    printf("%d\n", a[k-1]);
    return 0;
}
