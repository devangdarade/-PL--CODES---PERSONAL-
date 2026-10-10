#include <stdio.h>

int main() {
    int quantity;
    float price;

    printf("Enter number of apples: ");
    scanf("%d", &quantity);

    printf("Enter price per apple: ");
    scanf("%f", &price);

    printf("Total Amount = %.2f\n", quantity * price);

    return 0;
}