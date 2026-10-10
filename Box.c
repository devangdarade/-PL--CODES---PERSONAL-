#include <stdio.h>

int main() {
    float l, w, h;

    printf("Enter length, width and height: ");
    scanf("%f %f %f", &l, &w, &h);

    printf("Volume = %.2f\n", l * w * h);

    return 0;
}