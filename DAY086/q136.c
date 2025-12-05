/* Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) 
   and perform operations using switch.
*/
#include <stdio.h>

enum Menu { ADD=1, SUBTRACT, MULTIPLY };

int main() {
    int choice, a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1-ADD 2-SUBTRACT 3-MULTIPLY\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case ADD: printf("%d\n", a+b); break;
        case SUBTRACT: printf("%d\n", a-b); break;
        case MULTIPLY: printf("%d\n", a*b); break;
        default: printf("Invalid\n");
    }

    return 0;
}
