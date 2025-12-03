/* Write a program to swap the first and last digit of a number. */
#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits = 0, temp;
    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    last = temp % 10;

    while(temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp; 
    digits++; 

    
    int middle = n % (int)pow(10, digits-1); 
    
    int p = 1;
    for(int i = 1; i <= digits-1; i++) p *= 10;
    middle = n % p;       
    middle = middle / 10; 

    int result = last;
    for(int i = 0; i < digits-2; i++) result *= 10;
    result = result * 10 + middle;
    result = result * 10 + first;

    printf("Result = %d\n", result);
    return 0;
}
