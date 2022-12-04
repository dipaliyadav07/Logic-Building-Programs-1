// Logic Building - Assignment 12
// Question 3
// Write a program which accept number from user and count frequency of such a digits which are less than 6
// Input : 2395
// Output : 3

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("Frequency of number less than 6 in digit is: %d\n",iRet);

    return 0;
}