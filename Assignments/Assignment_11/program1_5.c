#include<stdio.h>
#include<stdlib.h>
void RangeDisplayRev(int istart,int iEnd)
{
    int iCnt = 0;
    for(iCnt = iEnd ; iCnt >= istart ; iCnt--)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iValue1 = 0, iValue2 =0;

    printf("Enter strating point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;

}