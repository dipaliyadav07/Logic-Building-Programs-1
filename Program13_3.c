// Logic Building - Assignment 13
// Question 3
// Write a program which accept number from user and return the count of digits in between 3 and 7
// Input : 2395
// Output : 1

#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Digits in between 3 and 7 are: %d\n",iRet);

    return 0;
}