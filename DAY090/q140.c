/* Define a struct with enum Gender and print person's gender. */
#include <stdio.h>

enum Gender { MALE, FEMALE };

struct Person {
    char name[100];
    enum Gender g;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf(" %[^\n]", p.name);

    printf("Enter gender (0-MALE, 1-FEMALE): ");
    scanf("%d", &p.g);

    printf("Name: %s\n", p.name);

    if(p.g == MALE) printf("Gender: Male\n");
    else if(p.g == FEMALE) printf("Gender: Female\n");
    else printf("Invalid\n");

    return 0;
}
