/* Print all enum names and integer values using a loop. */
#include <stdio.h>

enum Test { ONE, TWO, THREE, FOUR };

int main() {
    for(enum Test t = ONE; t <= FOUR; t++)
        printf("%d\n", t);

    return 0;
}
