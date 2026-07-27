#include <stdio.h>

int main() {
    char name[50];
    int consumerNo;
    float units, energyCharge, fixedCharge = 100.0, gst, totalBill;

    // Input
    printf("Enter Consumer Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Consumer Number: ");
    scanf("%d", &consumerNo);

    printf("Enter Units Consumed: ");
    scanf("%f", &units);

    // Calculate Energy Charge
    if (units <= 100) {
        energyCharge = units * 3.50;
    }
    else if (units <= 300) {
        energyCharge = (100 * 3.50) + ((units - 100) * 5.00);
    }
    else {
        energyCharge = (100 * 3.50) + (200 * 5.00) + ((units - 300) * 7.50);
    }

    // Calculate GST and Total Bill
    gst = (energyCharge + fixedCharge) * 0.18;
    totalBill = energyCharge + fixedCharge + gst;

    // Output
    printf("\n========== ELECTRICITY BILL ==========\n");
    printf("Consumer Name   : %s\n", name);
    printf("Consumer Number : %d\n", consumerNo);
    printf("Units Consumed  : %.2f\n", units);
    printf("Energy Charge   : Rs. %.2f\n", energyCharge);
    printf("Fixed Charge    : Rs. %.2f\n", fixedCharge);
    printf("GST (18%%)       : Rs. %.2f\n", gst);
    printf("--------------------------------------\n");
    printf("Total Bill      : Rs. %.2f\n", totalBill);

    return 0;
}