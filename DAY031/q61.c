/* Search for an element in an array using linear search. */
#include <stdio.h>

int main() {
    int n, key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[100];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if(!found) printf("Not Found\n");
    return 0;
}
