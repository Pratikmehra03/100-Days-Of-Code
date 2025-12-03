/* Write a program to take an integer array as input. 
   Only one element will be repeated. 
   Print the repeated element.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[500];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(a[i] == a[j]) {
                printf("%d\n", a[i]);
                return 0;
            }

    return 0;
}
