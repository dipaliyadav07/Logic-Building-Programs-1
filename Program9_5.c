// Logic Building - Assignment 9
// Question 5
// Write a program which returns the difference between even factorial and odd factorial of given number
// Input : 5
// Output : -7  (8 - 15)  

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenFact = 1, iOddFact = 1,iDiffFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    printf("Even Factors are :\n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
            iEvenFact = iEvenFact * iCnt;
        }
    }
    printf("\nOdd Factors are :\n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
            iOddFact = iOddFact * iCnt;
        }
    }
    iDiffFact = iEvenFact - iOddFact;
    return iDiffFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("\nFactorial difference is %d",iRet);

    return 0;
}