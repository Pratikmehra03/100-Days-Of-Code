/* Store details of 5 students in an array of structures and print all. */
#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf(" %[^\n]", s[i].name);
        printf("Enter roll number of student %d: ", i+1);
        scanf("%d", &s[i].roll_no);
        printf("Enter marks of student %d: ", i+1);
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for(int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
