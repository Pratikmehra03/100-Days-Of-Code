/* Read and print elements of a one-dimensional array. */
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[100];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Array: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
