#include <stdio.h>

int main() {
    char name[50];
    int id;
    float salary;

    printf("Enter employee name: ");
    scanf(" %49[^\n]", name);

    printf("Enter employee ID: ");
    scanf("%d", &id);

    printf("Enter monthly salary: ");
    scanf("%f", &salary);

    printf("Name: %s\n", name);
    printf("ID: %d\n", id);
    printf("Salary = %.2f\n", salary);

    return 0;
}