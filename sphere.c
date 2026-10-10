#include <stdio.h>

int main() {
    float r, area;

    printf("Enter radius: ");
    scanf("%f", &r);

    area = 4 * 3.14159f * r * r;

    printf("Surface Area = %.2f\n", area);

    return 0;
}