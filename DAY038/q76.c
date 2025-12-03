/* Check if a matrix is symmetric. */
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[50][50], flag = 1;

    printf("Enter matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(a[i][j] != a[j][i])
                flag = 0;

    if(flag) printf("Symmetric\n");
    else printf("Not Symmetric\n");

    return 0;
}
