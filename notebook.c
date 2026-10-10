#include <stdio.h>

int main() {
    int quantity;
    float price;

    printf("Enter number of notebooks: ");
    scanf("%d", &quantity);

    printf("Enter price per notebook: ");
    scanf("%f", &price);

    printf("Total Cost = %.2f\n", quantity * price);

    return 0;
}