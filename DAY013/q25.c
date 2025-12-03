/* Write a program to implement a basic calculator using switch-case. */
#include <stdio.h>

int main() {
    float a, b;
    char op;
    printf("Enter expression (a op b): ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
        case '+': printf("%.2f\n", a + b); break;
        case '-': printf("%.2f\n", a - b); break;
        case '*': printf("%.2f\n", a * b); break;
        case '/': 
            if(b != 0) printf("%.2f\n", a / b);
            else printf("Error\n");
            break;
        case '%': 
            printf("Modulo works only on integers\n");
            break;
        default: printf("Invalid\n");
    }
    return 0;
}
