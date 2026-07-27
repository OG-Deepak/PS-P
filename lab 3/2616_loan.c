#include <stdio.h>

int main() {
    char name[50];
    float salary, existingLoan, years, annualSalary;
    int creditScore;
    float maxLoan = 0;
    int interestRate = 0;

    // Input
    printf("Enter Applicant Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Monthly Salary (Rs.): ");
    scanf("%f", &salary);

    printf("Enter Credit Score: ");
    scanf("%d", &creditScore);

    printf("Enter Existing Loan Amount (Rs.): ");
    scanf("%f", &existingLoan);

    printf("Enter Years of Employment: ");
    scanf("%f", &years);

    annualSalary = salary * 12;

    // Eligibility Check
    if (salary >= 30000 &&
        creditScore >= 700 &&
        years >= 2 &&
        existingLoan <= (annualSalary * 0.50)) {

        printf("\n========= LOAN APPROVAL =========\n");
        printf("Applicant Name : %s\n", name);
        printf("Loan Status    : APPROVED\n");

        // Maximum Loan Amount
        if (salary >= 30000 && salary <= 49999)
            maxLoan = 500000;
        else if (salary >= 50000 && salary <= 99999)
            maxLoan = 1000000;
        else if (salary >= 100000)
            maxLoan = 2000000;

        // Interest Rate
        if (creditScore >= 850 && creditScore <= 900)
            interestRate = 8;
        else if (creditScore >= 800)
            interestRate = 9;
        else if (creditScore >= 750)
            interestRate = 10;
        else
            interestRate = 11;

        printf("Maximum Loan  : Rs. %.2f\n", maxLoan);
        printf("Interest Rate : %d%%\n", interestRate);
    }
    else {
        printf("\n========= LOAN APPROVAL =========\n");
        printf("Applicant Name : %s\n", name);
        printf("Loan Status    : REJECTED\n");

        printf("Reason(s):\n");

        if (salary < 30000)
            printf("- Monthly salary is less than Rs. 30000\n");

        if (creditScore < 700)
            printf("- Credit score is below 700\n");

        if (years < 2)
            printf("- Employment is less than 2 years\n");

        if (existingLoan > (annualSalary * 0.50))
            printf("- Existing loan exceeds 50%% of annual salary\n");
    }

    return 0;
}