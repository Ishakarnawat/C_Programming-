//Accept an employees monthly salary and complete years of service.Calculate the bonus using these rules:more than 10 years of servide earns a bonus of 15% of monthly salary : 5 to 10 years earns 10%;less than 5 years earns 5%.Salary must be positive and years of service cannot be negative.


#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(fSalary <= 0 || iYears < 0)
    {
        printf("Invalid salary or years of service\n");
    }
    else
    {
        if(iYears > 10)
        {
            fBonus = fSalary * 15 / 100;
        }
        else if(iYears >= 5)
        {
            fBonus = fSalary * 10 / 100;
        }
        else
        {
            fBonus = fSalary * 5 / 100;
        }

        printf("Bonus amount is: %.2f\n", fBonus);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter Salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}

