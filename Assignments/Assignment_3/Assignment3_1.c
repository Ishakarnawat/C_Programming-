//Write a program which accept one number from user and print that number of even numbers on screen.
#include <stdio.h>

// Function to print the first N even numbers
void PrintEven(int iNo)
{
    int iCnt = 0;

    // Check whether the input is valid
    if (iNo <= 0)
    {
        return;
    }

    // Print the first N even numbers
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt * 2);
    }
}

int main()
{
    int iValue = 0;

    // Accept a number from the user
    printf("Enter number:\n");
    scanf("%d", &iValue);

    // Call the function to print even numbers
    PrintEven(iValue);

    return 0;
}