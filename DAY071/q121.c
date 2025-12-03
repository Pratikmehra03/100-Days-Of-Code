/* Write a C program that creates a text file named info.txt in write mode. 
   The program should take the user’s name and age as input, 
   and write them to the file using fprintf(). 
   After writing, display a message confirming that the data was successfully saved.
*/
#include <stdio.h>

int main() {
    char name[100];
    int age;
    FILE *fp;

    fp = fopen("info.txt", "w");

    if(fp == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    printf("Enter name: ");
    scanf(" %[^\n]", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("Data saved successfully.\n");
    return 0;
}
