#include <stdio.h>

int main() {
    char name[50], member;
    int category;
    float amount, discount = 0, gstRate = 0;
    float discountAmount, amountAfterDiscount, gst, finalAmount;

    // Input
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name);

    printf("\nProduct Categories\n");
    printf("1. Grocery\n");
    printf("2. Clothing\n");
    printf("3. Electronics\n");
    printf("4. Home Appliances\n");

    printf("\nEnter Category (1-4): ");
    scanf("%d", &category);

    printf("Enter Purchase Amount (Rs.): ");
    scanf("%f", &amount);

    printf("Premium Member? (Y/N): ");
    scanf(" %c", &member);

    // Discount based on purchase amount
    if (amount < 1000)
        discount = 0;
    else if (amount < 5000)
        discount = 5;
    else if (amount < 10000)
        discount = 10;
    else
        discount = 15;

    // Additional discount for Premium Members
    if (member == 'Y' || member == 'y')
        discount += 5;

    // GST based on category
    switch (category) {
        case 1:
            gstRate = 5;
            break;
        case 2:
            gstRate = 12;
            break;
        case 3:
            gstRate = 18;
            break;
        case 4:
            gstRate = 18;
            break;
        default:
            printf("Invalid Category!\n");
            return 0;
    }

    // Calculations
    discountAmount = amount * discount / 100;
    amountAfterDiscount = amount - discountAmount;
    gst = amountAfterDiscount * gstRate / 100;
    finalAmount = amountAfterDiscount + gst;

    // Output
    printf("\n========== SHOPPING BILL ==========\n");
    printf("Customer Name      : %s\n", name);
    printf("Purchase Amount    : Rs. %.2f\n", amount);
    printf("Discount           : %.0f%% (Rs. %.2f)\n", discount, discountAmount);
    printf("GST                : %.0f%% (Rs. %.2f)\n", gstRate, gst);
    printf("-----------------------------------\n");
    printf("Final Payable Amt  : Rs. %.2f\n", finalAmount);

    return 0;
}