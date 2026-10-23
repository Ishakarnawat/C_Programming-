
// Check Whether a Number Is Positive or Negative

#include <stdio.h>
#include <stdlib.h>

// Function to check whether the number is positive, negative, or zero
void CheckNumber(int iValue)
{
    // Check whether the number is positive
    if (iValue > 0)
    {
        printf("%d is a Positive number.\n", iValue);
    }
    // Check whether the number is negative.
    else if (iValue < 0)
    {
        printf("%d is a Negative number.\n", iValue);
    }
    // If neither condition is true, the number is zero
    else
    {
        printf("The Number is Zero.\n");
    }
}

int main()
{
    int iValue = 0;

    // Accept a number from the user
    printf("Enter a number: ");
    scanf("%d", &iValue);

    // Call CheckNumber() 
    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
