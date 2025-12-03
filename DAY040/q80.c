/* Multiply two matrices. */
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns of matrix 1: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of matrix 2: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != c2 && c1 != r2) {
        printf("Multiplication not possible\n");
        return 0;
    }

    int a[50][50], b[50][50], m[50][50];

    printf("Enter matrix 1:\n");
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter matrix 2:\n");
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++) {
            m[i][j] = 0;
            for(int k = 0; k < c1; k++)
                m[i][j] += a[i][k] * b[k][j];
        }

    printf("Result:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }

    return 0;
}
