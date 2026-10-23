//Write a program which accept number from user and print all even factors of that number.


#include <stdio.h>

// Function to display even factors of a number
void DisplayEvenFactor(int iNo)
{
    int i = 0;

    // Convert a negative number to positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Check whether the number is zero
    if (iNo == 0)
    {
        printf("Please enter a non-zero number.\n");
        return;
    }

    // Check each number from 1 to iNo
    for (i = 1; i <= iNo; i++)
    {
        // Check whether i is a factor and an even number
        if ((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\t", i);
        }
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    // Accept a number from the user
    printf("Enter number:\n");
    scanf("%d", &iValue);

    // Display even factors of the given number
    DisplayEvenFactor(iValue);

    return 0;
}
