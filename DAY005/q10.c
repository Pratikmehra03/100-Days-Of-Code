/* Write a program to convert seconds into hours:minutes:seconds format. */
#include <stdio.h>

int main() {
    int sec, h, m;
    printf("Enter total seconds: ");
    scanf("%d", &sec);

    h = sec / 3600;
    sec = sec % 3600;
    m = sec / 60;
    sec = sec % 60;

    printf("%02d:%02d:%02d\n", h, m, sec);
    return 0;
}
