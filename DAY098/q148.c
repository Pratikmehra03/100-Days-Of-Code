/* Take two structs as input and check if they are identical. */
#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter first student name: ");
    scanf(" %[^\n]", s1.name);
    printf("Enter first student roll number: ");
    scanf("%d", &s1.roll_no);
    printf("Enter first student marks: ");
    scanf("%f", &s1.marks);

    printf("Enter second student name: ");
    scanf(" %[^\n]", s2.name);
    printf("Enter second student roll number: ");
    scanf("%d", &s2.roll_no);
    printf("Enter second student marks: ");
    scanf("%f", &s2.marks);

    if(strcmp(s1.name, s2.name) == 0 &&
       s1.roll_no == s2.roll_no &&
       s1.marks == s2.marks)
        printf("Identical\n");
    else
        printf("Not Identical\n");

    return 0;
}
