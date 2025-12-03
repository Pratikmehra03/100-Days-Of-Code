/* Insert an element in a sorted array at the appropriate position. */
#include <stdio.h>

int main() {
    int n, x, pos;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[100];
    printf("Enter sorted elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    pos = n;
    while(pos > 0 && a[pos - 1] > x) {
        a[pos] = a[pos - 1];
        pos--;
    }
    a[pos] = x;
    n++;

    printf("Updated array: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
