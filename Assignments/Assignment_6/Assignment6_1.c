
// Accept the number of electricity units consumed and calculated the total bill using the following slabes wise rates. Program to Calculate Electricity Bill Using Slab-Wise Rates

#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    
    if (iUnits < 0)
    {
        printf("Invalid electricity units.\n");
    }
    // First 100 units: Rs. 5 per unit
    else if (iUnits <= 100)
    {
        fBill = iUnits * 5.0f;
        printf("Bill = %.2f\n", fBill);
    }
    // Next 100 units: Rs. 7 per unit
    else if (iUnits <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);
        printf("Bill = %.2f\n", fBill);
    }
    // Above 200 units: Rs. 10 per unit
    else
    {
        fBill = (100 * 5.0f) +
                (100 * 7.0f) +
                ((iUnits - 200) * 10.0f);

        printf("Bill = %.2f\n", fBill);
    }
}

int main(void)
{
    int iUnits = 0;

    
    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    
    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
