/* Return a structure containing top student's details from a function. */
#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int topIndex = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[topIndex].marks)
            topIndex = i;
    }
    return s[topIndex];
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[100];

    for(int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf(" %[^\n]", s[i].name);
        printf("Enter roll number of student %d: ", i+1);
        scanf("%d", &s[i].roll_no);
        printf("Enter marks of student %d: ", i+1);
        scanf("%f", &s[i].marks);
    }

    struct Student top = getTopStudent(s, n);

    printf("\nTop Student:\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
