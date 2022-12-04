// Logic Building - Assignment 11
// Question 4
// Write a program which accept range from user and display all numbers between that range in reverse order
// Input : 23   35
// Output : 35  34  33  32  31  30  29  28  27  26  25  24  23

#include<stdio.h>

int RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point\n");
    scanf("%d",&iValue1);

    printf("Enter Ending point\n");
    scanf("%d",&iValue2);

    if(iValue1 > iValue2)
    {
        printf("Invalid range\n");
    }

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}