// Logic Building - Assignment 8
// Question 3
// Write a program to find factorial of given number
// Input : 5
// Output : 120     (5 * 4 * 3 * 2 * 1)

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMult = iMult * iCnt;
    }
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is : %d\n",iValue,iRet);

    return 0;
}