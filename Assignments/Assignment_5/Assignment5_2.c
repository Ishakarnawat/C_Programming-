
// Accept a year and determine whether it is a leap year according to Gregorian calendar rules. Years less than or equal to zero are considered invalid.

#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    
    if (iYear <= 0)
    {
        printf("Invalid Year\n");
    }
    // A year divisible by 400 is a leap year
    else if (iYear % 400 == 0)
    {
        printf("%d is a Leap Year\n", iYear);
    }
    // A year divisible by 4 but not by 100 is a leap year
    else if ((iYear % 4 == 0) && (iYear % 100 != 0))
    {
        printf("%d is a Leap Year\n", iYear);
    }
    
    else
    {
        printf("%d is not a Leap Year\n", iYear);
    }
}

int main()
{
    int iYear = 0;

    
    printf("Enter year: ");
    scanf("%d", &iYear);

    
    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}
