/* Change the date format from dd/04/yyyy to dd-Apr-yyyy. */
#include <stdio.h>

int main() {
    char date[20];
    printf("Enter date (dd/mm/yyyy): ");
    gets(date);

    char month[4];
    int mm = (date[3]-'0')*10 + (date[4]-'0');

    char *names[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    strcpy(month, names[mm-1]);

    date[2] = '\0';
    printf("%s-%s-%s\n", date, month, &date[6]);

    return 0;
}
