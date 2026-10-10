#include <stdio.h>

int main() {
    float r, h;

    printf("Enter radius and height: ");
    scanf("%f %f", &r, &h);

    printf("Volume = %.2f\n", 3.14159f * r * r * h);

    return 0;
}