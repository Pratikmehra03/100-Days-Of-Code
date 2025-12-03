/* Write a program to take an array nums which contains only positive integers, 
   and an integer target as inputs. 
   The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] = target. 
   Assume exactly one solution exists and return the indices in any order. 
   If no solution exists, print "-1 -1".
*/
#include <stdio.h>

int main() {
    int n, target;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[300];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(a[i] + a[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }

    printf("-1 -1\n");
    return 0;
}
