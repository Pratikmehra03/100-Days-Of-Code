/* Rotate an array to the right by k positions. */
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[100];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    k %= n;

    int t[100];
    for(int i = 0; i < n; i++) {
        t[(i + k) % n] = a[i];
    }

    printf("Rotated array: ");
    for(int i = 0; i < n; i++) printf("%d ", t[i]);

    return 0;
}
