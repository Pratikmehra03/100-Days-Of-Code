// Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a, b, temp;

    // Take input from user
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Display before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap using third variable
    temp = a;
    a = b;
    b = temp;

    // Display after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
