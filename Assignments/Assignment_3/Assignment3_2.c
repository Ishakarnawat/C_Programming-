
// Write a program which accepts a number from the user and prints the even factors of that number.

#include <stdio.h>

// Function to display even factors of a number
void DisplayFactor(int iNo)
{
    int i = 0;

    // Convert a negative number into a positive number
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    // Iterate through all numbers from 1 to iNo
    for(i = 1; i <= iNo; i++)
    {
        // Check whether i is a factor and an even number
        if((iNo % i == 0) && (i % 2 == 0))
        {
            // Display the even factor
            printf("%d\t", i);
        }
    }
}

// Entry point of the program
int main()
{
    int iValue = 0;

    // Accept a number from the user
    printf("Enter number\n");
    scanf("%d", &iValue);

    // Call the function to display even factors
    DisplayFactor(iValue);

    return 0;
}