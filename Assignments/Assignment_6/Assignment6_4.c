//Accept three integer values representing the lengths of the sides of atriangle.Determine whether they can form a valid triangle.All sides must be positive,and the sum of any two sidesmust be greater than the thirs side.


#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if(iSide1 > 0 && iSide2 > 0 && iSide3 > 0 &&
       iSide1 + iSide2 > iSide3 &&
       iSide2 + iSide3 > iSide1 &&
       iSide1 + iSide3 > iSide2)
    {
        printf("Triangle is valid\n");
    }
    else
    {
        printf("Triangle is invalid\n");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides: \n ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}
