/* Check if the elements on the diagonal of a matrix are distinct. */
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[50][50], freq[1000] = {0};

    printf("Enter matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int ok = 1;
    for(int i = 0; i < n; i++) {
        int d = a[i][i];
        if(freq[d] == 1) ok = 0;
        freq[d] = 1;
    }

    if(ok) printf("Distinct\n");
    else printf("Not Distinct\n");

    return 0;
}
