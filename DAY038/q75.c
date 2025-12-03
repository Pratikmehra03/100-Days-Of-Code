/* Add two matrices. */
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[50][50], b[50][50], s[50][50];

    printf("Enter first matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            s[i][j] = a[i][j] + b[i][j];

    printf("Sum matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", s[i][j]);
        printf("\n");
    }
    return 0;
}
