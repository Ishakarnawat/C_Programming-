// Accept the total purchase amount and calculate the final payable amount after applying the following discount.Negative purchase amounts are invalid.


#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinal = 0.0f;

    if (fAmount < 0)
    {
        printf("Invalid Input\n");
    }
    else if (fAmount < 1000)
    {
        fDiscount = 0;
        fFinal = fAmount - fDiscount;
        printf("Payable Amount = %.2f\n", fFinal);
    }
    else if (fAmount < 5000)
    {
        fDiscount = fAmount * 0.10f;
        fFinal = fAmount - fDiscount;
        printf("Payable Amount = %.2f\n", fFinal);
    }
    else
    {
        fDiscount = fAmount * 0.20f;
        fFinal = fAmount - fDiscount;
        printf("Payable Amount = %.2f\n", fFinal);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}
