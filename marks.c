#include <stdio.h>

int main() {
    float a, b, c, d, e, total;

    printf("Enter five subject marks: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    total = a + b + c + d + e;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", total / 5);

    return 0;
}