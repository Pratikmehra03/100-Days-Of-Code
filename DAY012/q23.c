/* Write a program to calculate library fine based on late days. */
#include <stdio.h>

int main() {
    int d;
    printf("Enter number of days late: ");
    scanf("%d", &d);

    if(d <= 5) printf("Fine = %d\n", d * 2);
    else if(d <= 10) printf("Fine = %d\n", 5*2 + (d-5)*4);
    else if(d <= 30) printf("Fine = %d\n", 5*2 + 5*4 + (d-10)*6);
    else printf("Membership Cancelled\n");

    return 0;
}
