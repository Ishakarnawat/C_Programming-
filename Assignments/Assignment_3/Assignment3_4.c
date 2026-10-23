//Accept one charachter from user and convert case of that charachter.


#include <stdio.h>

// Function to convert the case of a character.
void DisplayConvert(char CValue)
{
    // Check whether the character is an uppercase letter.
    if (CValue >= 'A' && CValue <= 'Z')
    {
        // Convert uppercase to lowercase.
        printf("%c\n", CValue + 32);
    }
    // Check whether the character is a lowercase letter.
    else if (CValue >= 'a' && CValue <= 'z')
    {
        // Convert lowercase to uppercase.
        printf("%c\n", CValue - 32);
    }
}

int main()
{
    // Variable to store the character entered by the user.
    char cValue = '\0';

    // Accept a character from the user.
    printf("Enter character:\n");
    scanf(" %c", &cValue);

    // Call the function to convert the character's case.
    DisplayConvert(cValue);

    return 0;
}

