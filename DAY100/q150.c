/* Use pointer to struct to modify and display data using -> operator. */
#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    ptr = &s;

    printf("Enter name: ");
    scanf(" %[^\n]", ptr->name);
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);
    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    /* Modify using pointer */
    ptr->marks += 5;  /* for example, adding grace marks */

    printf("\nStudent Details (using pointer):\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
