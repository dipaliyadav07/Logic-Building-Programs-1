// Logic Building - Assignment 13
// Question 5
// Write a program which accept number from user and return difference between summation of even digits and summation of odd digits
// Input : 2395
// Output : -15 (2 - 17)

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iCntEven = 0, iCntOdd = 0, iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCntEven = iCntEven + iDigit;
        }
        else if(iDigit % 2 != 0)
        {
            iCntOdd = iCntOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    iDiff = iCntEven - iCntOdd;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference between summation of even and odd digit is: %d\n",iRet);

    return 0;
}