// Logic Building - Assignment 11
// Question 4
// Write a program which accept range from user and return addition of all even numbers in between that range 
// Input : 23   30
// Output : 108

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
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
    
    iRet = RangeSumEven(iValue1,iValue2);

    printf("Addition is : %d\n",iRet);

    return 0;
}