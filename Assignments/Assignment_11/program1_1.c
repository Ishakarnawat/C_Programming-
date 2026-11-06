#include<stdio.h>
#include<stdlib.h>
void RangeDisplay(int istart,int iEnd)
{
    for(istart = istart ; istart <= iEnd; istart++)
    {
        printf("%d\n",istart);
    }
}
int main()
{
    int iValue1 = 0, iValue2 =0;

    printf("Enter strating point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return EXIT_SUCCESS;

}