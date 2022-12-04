// Logic Building - Assignment 11
// Question 3
// Write a program which accept range from user and return addition of all numbers in between that range 
// Input : 23   30
// Output : 212

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point\n");
    scanf("%d",&iValue1);

    printf("Enter Ending point\n");
    scanf("%d",&iValue2);

    if(iValue1 || iValue2 < 0)
    {
        printf("Invalid range\n");
    }

    iRet = RangeSum(iValue1,iValue2);

    printf("Addition is : %d\n",iRet);

    return 0;
}