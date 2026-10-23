
// Program: Accept a character from the user and check whether  it is a vowel (a, e, i, o, u) or not.

#include <stdio.h>

typedef int BOOL;

// Define constants for TRUE and FALSE.
#define TRUE 1
#define FALSE 0

// Function to check whether the given character is a vowel.
BOOL CheckVowel(char cValue)
{
    // Check for both lowercase and uppercase vowels.
    if ((cValue == 'a') || (cValue == 'A') ||
        (cValue == 'e') || (cValue == 'E') ||
        (cValue == 'i') || (cValue == 'I') ||
        (cValue == 'o') || (cValue == 'O') ||
        (cValue == 'u') || (cValue == 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    // Accept a character from the user.
    printf("Enter Character:\n");
    scanf("%c", &cValue);

    // Call CheckVowel() to check whether the character is a vowel.
    bRet = CheckVowel(cValue);

    // Display the result.
    if (bRet == TRUE)
    {
        printf("It is a vowel.\n");
    }
    else
    {
        printf("It is not a vowel.\n");
    }

    return 0;
}
