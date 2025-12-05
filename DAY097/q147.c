/* Store employee data in a binary file using fwrite() and read using fread(). */
#include <stdio.h>

struct Employee {
    char name[100];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee e[100];

    for(int i = 0; i < n; i++) {
        printf("Enter name of employee %d: ", i+1);
        scanf(" %[^\n]", e[i].name);
        printf("Enter id of employee %d: ", i+1);
        scanf("%d", &e[i].id);
        printf("Enter salary of employee %d: ", i+1);
        scanf("%f", &e[i].salary);
    }

    fp = fopen("employees.dat", "wb");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    fwrite(e, sizeof(struct Employee), n, fp);
    fclose(fp);

    fp = fopen("employees.dat", "rb");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    struct Employee temp[100];
    int readCount = fread(temp, sizeof(struct Employee), n, fp);
    fclose(fp);

    printf("\nEmployee Records from file:\n");
    for(int i = 0; i < readCount; i++) {
        printf("\nEmployee %d:\n", i+1);
        printf("Name: %s\n", temp[i].name);
        printf("ID: %d\n", temp[i].id);
        printf("Salary: %.2f\n", temp[i].salary);
    }

    return 0;
}
