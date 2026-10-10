#include <stdio.h>

int main() {
    char name[50], city[50];
    int age;

    printf("Enter name: ");
    scanf(" %49[^\n]", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter city: ");
    scanf(" %49[^\n]", city);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("City: %s\n", city);

    return 0;
}