#include<stdio.h>
#include<stdlib.h>
int RangeSumEvent(int istart,int iEnd)
{
    int iSum = 0;
    if(istart <= 0 || iEnd <= 0 || istart > iEnd)
    {
        return -1;
    }
    for(istart = istart ; istart <= iEnd; istart++)
    {
        if(istart % 2 == 0)
        {
            iSum = iSum + istart; 
        }
    } 
    return iSum;
}
int main()
{
    int iValue1 = 0, iValue2 = 0 ,  iRet = 0;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    iRet = RangeSumEvent(iValue1,iValue2);

    printf("Addition is : %d\n",iRet);

    return EXIT_SUCCESS;

}