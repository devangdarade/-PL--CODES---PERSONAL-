#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("Average = %.2f\n", (a + b + c + d) / 4.0f);

    return 0;
}