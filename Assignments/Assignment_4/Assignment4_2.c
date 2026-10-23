
// Accept an integer from the user and determine whether it is even or odd An even number is completely divisible by 2.


#include<stdio.h>
#include<stdlib.h>

// Function to check whether the given number is even or odd
void CheckEvenOdd(int iValue)
{
    // Check whether the number is completely divisible by 2
    if(iValue % 2 == 0)
    {
        
        printf("Number is Even\n");
    }
    else
    {
        
        printf("Number is Odd\n");
    }
}

// Main function
int main()
{
    int iValue = 0;

    // Accept an integer from the user
    printf("Enter a number: ");
    scanf("%d", &iValue);

    // Call the function to check whether the number is even or odd
    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}

