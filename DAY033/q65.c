/* Search in a sorted array using binary search. */
#include <stdio.h>

int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[100];
    printf("Enter sorted elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    int l = 0, r = n-1, mid, found = 0;

    while(l <= r) {
        mid = (l + r) / 2;
        if(a[mid] == key) {
            printf("Found at index %d\n", mid);
            found = 1;
            break;
        } else if(a[mid] < key)
            l = mid + 1;
        else
            r = mid - 1;
    }

    if(!found) printf("Not Found\n");
    return 0;
}
