
// Accept two integers and determine which number is greater If both numbers are equal, display an appropriate message.

#include <stdio.h>
#include <stdlib.h>

// Function to find the greater number
void FindGreater(int iFirst, int iSecond)
{
    if (iFirst > iSecond)
    {
        printf("%d is greater than %d\n", iFirst, iSecond);
    }
    else if (iFirst < iSecond)
    {
        printf("%d is greater than %d\n", iSecond, iFirst);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    // Accept the first number
    printf("Enter the first number: ");
    scanf("%d", &iValue1);

    // Accept the second number
    printf("Enter the second number: ");
    scanf("%d", &iValue2);

    // Call the function to compare the numbers
    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}
