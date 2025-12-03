/* Perform diagonal traversal of a matrix. */
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[50][50];
    printf("Enter matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal traversal: ");
    for(int k = 0; k < r + c - 1; k++) {
        for(int i = 0; i < r; i++) {
            int j = k - i;
            if(j >= 0 && j < c)
                printf("%d ", a[i][j]);
        }
    }
    return 0;
}
