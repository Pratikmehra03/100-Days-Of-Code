/* Reverse an array without taking extra space. */
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[100];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    for(int i = 0, j = n-1; i < j; i++, j--) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    printf("Reversed array: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
