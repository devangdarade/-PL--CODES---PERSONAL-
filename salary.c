#include <stdio.h>

int main() {
    float salary;

    printf("Enter monthly salary: ");
    scanf("%f", &salary);

    printf("Annual Salary = %.2f\n", salary * 12);

    return 0;
}