// Logic Building - Assignment 13
// Question 4
// Write a program which accept number from user and return multiplication of all digit
// Input : 2395
// Output : 270

#include<stdio.h>

int MultDigit(int iNo)
{
    int iDigit = 0, iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iDigit = 1;
        }
        iNo = iNo / 10;
        iMult = iMult * iDigit;

    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);

    printf("Multiplication of digits is: %d\n",iRet);

    return 0;
}