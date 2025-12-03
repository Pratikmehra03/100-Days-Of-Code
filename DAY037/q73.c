/* Find the sum of each row of a matrix and store it in an array. */
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[50][50], rowSum[50];

    printf("Enter matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for(int j = 0; j < c; j++)
            rowSum[i] += a[i][j];
    }

    printf("Row sums: ");
    for(int i = 0; i < r; i++) printf("%d ", rowSum[i]);

    return 0;
}
