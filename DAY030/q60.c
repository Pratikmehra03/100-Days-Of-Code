/* Count positive, negative, and zero elements in an array. */
#include <stdio.h>

int main() {
    int n, pos = 0, neg = 0, zer = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[100];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] > 0) pos++;
        else if(a[i] < 0) neg++;
        else zer++;
    }
    printf("Positive = %d\nNegative = %d\nZero = %d\n", pos, neg, zer);
    return 0;
}
