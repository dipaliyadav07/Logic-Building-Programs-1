// Logic Building - Assignment 12
// Question 4
// Write a program which accept number from user and count frequency of 4 in it
// Input : 2395
// Output : 0

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
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

    iRet = CountFour(iValue);

    printf("Frequency of 4 in digit is: %d\n",iRet);

    return 0;
}