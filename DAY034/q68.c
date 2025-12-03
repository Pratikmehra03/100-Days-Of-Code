/* Delete an element from an array. */
#include <stdio.h>

int main() {
    int n, pos;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[100];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for(int i = pos; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    printf("Updated array: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
