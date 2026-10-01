#include <stdio.h>

// Function to calculate tax based on gross salary
float calculateTax(float grossSalary)
{
    if (grossSalary < 30000.0f)
    {
        return grossSalary * 0.05f;
    }
    else if (grossSalary < 60000.0f)
    {
        return grossSalary * 0.10f;
    }
    else
    {
        return grossSalary * 0.15f;
    }
}

int main()
{
    float grossSalary, tax, netSalary;

    // Prompt user for input
    printf("Enter the gross salary: ");
    scanf("%f", &grossSalary);

    // Calculate tax and net salary
    tax = calculateTax(grossSalary);
    netSalary = grossSalary - tax;

    // Display the results
    printf("\n--- Salary Details ---\n");
    printf("Gross Salary : Ksh%.2f\n", grossSalary);
    printf("Tax Amount   : Ksh%.2f\n", tax);
    printf("Net Salary   : Ksh5%.2f\n", netSalary);

    return 0;
}
