#include <stdio.h>

int main() {
    float price;
    int quantity;

    printf("Enter price and quantity: ");
    scanf("%f %d", &price, &quantity);

    printf("Total Bill = %.2f\n", price * quantity);

    return 0;
}