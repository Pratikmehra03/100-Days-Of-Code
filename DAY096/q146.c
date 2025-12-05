/* Create Employee structure with nested Date structure for joining date and print details. */
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[100];
    int id;
    struct Date joining;
};

int main() {
    struct Employee e;

    printf("Enter employee name: ");
    scanf(" %[^\n]", e.name);
    printf("Enter employee id: ");
    scanf("%d", &e.id);
    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &e.joining.day, &e.joining.month, &e.joining.year);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Joining Date: %02d-%02d-%04d\n", e.joining.day, e.joining.month, e.joining.year);

    return 0;
}
