/* Write a program to take an integer array nums of size n, 
   and print the majority element. 
   The majority element is the element that appears strictly more than n/2 times. 
   Print -1 if no such element exists.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: "); 
    scanf("%d", &n);

    int a[200];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    int cand = a[0], count = 1;

    for(int i = 1; i < n; i++) {
        if(a[i] == cand) count++;
        else {
            count--;
            if(count == 0) {
                cand = a[i];
                count = 1;
            }
        }
    }

    int freq = 0;
    for(int i = 0; i < n; i++) if(a[i] == cand) freq++;

    if(freq > n/2) printf("%d\n", cand);
    else printf("-1\n");

    return 0;
}
