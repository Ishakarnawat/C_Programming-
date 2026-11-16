//write a program accept number from user and return the count of odd digits.
#include <stdio.h>
#include <stdlib.h>
int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 1)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf("Frequency of even digits is : %d\n", iRet);

    return EXIT_SUCCESS;
}