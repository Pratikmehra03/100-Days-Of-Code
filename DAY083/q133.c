/* Create an enum for months and print how many days each month has. */
#include <stdio.h>

enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    enum Month m;

    printf("Enter month number (1-12): ");
    scanf("%d", &m);

    if(m == FEB) printf("28 or 29 days\n");
    else if(m==APR || m==JUN || m==SEP || m==NOV) printf("30 days\n");
    else if(m>=JAN && m<=DEC) printf("31 days\n");
    else printf("Invalid month\n");

    return 0;
}
