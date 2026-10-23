
// Accept the age of a person and determine whether the person is eligible to vote. A person must be at least 18 years old to vote. A negative age should be considered invalid.

#include<stdio.h>
#include<stdlib.h>

// Function to check voting eligibility
void CheckVotingEligibility(int iAge)
{
    // Check whether the age is negative
    if(iAge < 0)
    {
        printf("Invalid Age\n");
    }
    // Check whether the person is eligible to vote
    else if(iAge >= 18)
    {
        printf("You are eligible for voting.\n");
    }
    // If the age is less than 18
    else
    {
        printf("You are not eligible for voting.\n");
    }
}

int main()
{
    int iAge = 0;

    // Accept age from the user
    printf("Enter your age: ");
    scanf("%d", &iAge);

    // Call the function
    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}
