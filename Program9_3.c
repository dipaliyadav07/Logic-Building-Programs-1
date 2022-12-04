// Logic Building - Assignment 9
// Question 3
// Write a program to find even factorial of a number
// Input : 5
// Output : 8   (2 * 4)

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Even Factors are :\n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\n",iCnt);
            iFact = iFact * iCnt;
        }
    }
   return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}