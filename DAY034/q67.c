/* Insert an element in an array at a given position. */
#include <stdio.h>

int main() {
    int n, pos, x;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[100];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter position and element: ");
    scanf("%d %d", &pos, &x);

    for(int i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = x;
    n++;

    printf("Updated array: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
