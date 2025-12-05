/* Define an enum for traffic lights (RED, YELLOW, GREEN) 
   and print 'Stop', 'Wait', or 'Go' based on its value.
*/
#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    enum Light signal;

    printf("Enter light (0-RED, 1-YELLOW, 2-GREEN): ");
    scanf("%d", &signal);

    if(signal == RED) printf("Stop\n");
    else if(signal == YELLOW) printf("Wait\n");
    else if(signal == GREEN) printf("Go\n");
    else printf("Invalid\n");

    return 0;
}
