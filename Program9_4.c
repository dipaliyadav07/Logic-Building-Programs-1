// Logic Building - Assignment 9
// Question 4
// Write a program to find odd factorial of a number
// Input : 5
// Output : 15   (5 * 3 * 1)


#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    printf("Odd Factors are :\n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}