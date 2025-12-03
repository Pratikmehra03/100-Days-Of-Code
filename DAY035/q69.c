/* Find the second largest element in an array. */
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[100];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    int max = a[0], second = -999999;

    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            second = max;
            max = a[i];
        } else if(a[i] > second && a[i] != max) {
            second = a[i];
        }
    }

    printf("Second largest = %d\n", second);
    return 0;
}
