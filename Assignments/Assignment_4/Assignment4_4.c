
// Accept an integer and determine whether it is divisible by 5 without leaving any remainder.

#include <stdio.h>
#include <stdlib.h>

// Function to check divisibility by 5
void CheckDivisibility(int iValue)
{
    if (iValue % 5 == 0)
    {
        printf("%d is divisible by 5.\n", iValue);
    }
    else
    {
        printf("%d is not divisible by 5.\n", iValue);
    }
}

int main()
{
    int iValue = 0;

    // Accept an integer from the user
    printf("Enter a number: ");
    scanf("%d", &iValue);

    // Call the function
    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}
