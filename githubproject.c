#include <stdio.h>

float calculateBill(int qty[], float price[], int n) {
    float total = 0;
    for(int i = 0; i < n; i++) {
        total += qty[i] * price[i];
    }
    return total;
}

int main() {
    int n = 3;
    int quantity[3];
    float prices[3] = {120.0, 80.0, 60.0};
    char items[3][20] = {"Pizza", "Burger", "Sandwich"};

    printf("----- Online Food Menu -----\n");
    for(int i = 0; i < n; i++) {
        printf("%d. %s - Rs %.2f\n", i+1, items[i], prices[i]);
    }

    printf("\nEnter quantity for each item:\n");
    for(int i = 0; i < n; i++) {
        printf("%s: ", items[i]);
        scanf("%d", &quantity[i]);
    }

    float totalBill = calculateBill(quantity, prices, n);

    printf("\nTotal Amount to Pay: Rs %.2f\n", totalBill);

    return 0;
}