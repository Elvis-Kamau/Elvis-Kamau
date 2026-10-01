#include <stdio.h>

// Function to calculate discount
float calculateDiscount(float purchaseAmount)
{
    float discount;

    if (purchaseAmount < 5000)
    {
        discount = purchaseAmount * 5 / 100;
    }
    else if (purchaseAmount >= 5000 && purchaseAmount < 10000)
    {
        discount = purchaseAmount * 10 / 100;
    }
    else
    {
        discount = purchaseAmount * 15 / 100;
    }

    return discount;
}

int main()
{
    float purchaseAmount, discount, amountPayable;

    // Prompt the user to enter purchase amount
    printf("Enter purchase amount: ");
    scanf("%f", &purchaseAmount);

    // Call the function
    discount = calculateDiscount(purchaseAmount);

    // Calculate amount payable
    amountPayable = purchaseAmount - discount;

    // Display results
    printf("Purchase amount: %.2f\n", purchaseAmount);
    printf("Discount amount: %.2f\n", discount);
    printf("Amount payable: %.2f\n", amountPayable);

    return 0;
}

