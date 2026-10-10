#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter costs of three items: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Total Cost = %.2f\n", a + b + c);

    return 0;
}