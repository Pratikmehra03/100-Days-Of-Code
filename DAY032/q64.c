/* Find the digit that occurs the most times in an integer number. */
#include <stdio.h>

int main() {
    int n, freq[10] = {0};
    printf("Enter number: ");
    scanf("%d", &n);

    if(n < 0) n = -n;

    while(n > 0) {
        int d = n % 10;
        freq[d]++;
        n /= 10;
    }

    int maxDigit = 0;
    for(int i = 1; i < 10; i++)
        if(freq[i] > freq[maxDigit])
            maxDigit = i;

    printf("Most frequent digit = %d\n", maxDigit);
    return 0;
}
