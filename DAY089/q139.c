/* Show that enums store integers by printing assigned values. */
#include <stdio.h>

enum Sample { X=5, Y=20, Z=100 };

int main() {
    printf("%d %d %d\n", X, Y, Z);
    return 0;
}
