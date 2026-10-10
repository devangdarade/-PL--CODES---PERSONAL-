#include <stdio.h>

int main() {
    float width, height;

    printf("Enter width and height: ");
    scanf("%f %f", &width, &height);

    printf("Wall Area = %.2f\n", width * height);

    return 0;
}