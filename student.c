#include <stdio.h>

int main() {
    char name[50], branch[50];
    int roll;

    printf("Enter name: ");
    scanf(" %49[^\n]", name);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter branch: ");
    scanf(" %49[^\n]", branch);

    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", roll);
    printf("Branch: %s\n", branch);

    return 0;
}