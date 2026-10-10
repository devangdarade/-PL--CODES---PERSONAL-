#include <stdio.h>

int main() {
    int days;
    float wages;

    printf("Enter working days: ");
    scanf("%d", &days);

    printf("Enter daily wages: ");
    scanf("%f", &wages);

    printf("Total Salary = %.2f\n", days * wages);

    return 0;
}