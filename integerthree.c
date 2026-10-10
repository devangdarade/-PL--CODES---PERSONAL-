#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Average = %.2f\n", (a + b + c) / 3.0f);

    return 0;
}