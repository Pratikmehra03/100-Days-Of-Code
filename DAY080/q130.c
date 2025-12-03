/* Store multiple student records (name, roll number, marks) into a file using fprintf(). 
   Then read them using fscanf() and display each record.
*/
#include <stdio.h>

int main() {
    FILE *fp;
    int n, roll, marks;
    char name[100];

    fp = fopen("students.txt", "w");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf(" %[^\n]", name);
        printf("Enter roll no: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    printf("\nRecords:\n");
    while(fscanf(fp, "%s %d %d", name, &roll, &marks) == 3)
        printf("%s %d %d\n", name, roll, marks);

    fclose(fp);
    return 0;
}
