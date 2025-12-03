/* Write a program to find profit or loss percentage given cost price and selling price. */
#include <stdio.h>

int main() {
    float cp, sp;
    printf("Enter CP and SP: ");
    scanf("%f %f", &cp, &sp);

    if(sp > cp)
        printf("Profit %% = %.2f\n", ((sp - cp) / cp) * 100);
    else if(sp < cp)
        printf("Loss %% = %.2f\n", ((cp - sp) / cp) * 100);
    else
        printf("No Profit No Loss\n");

    return 0;
}
