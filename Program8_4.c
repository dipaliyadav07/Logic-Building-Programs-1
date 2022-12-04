// Logic Building - Assignment 8
// Question 4
// Write a program which accept number from user and display its table
// Input : 2
// Output : 2   4   6   8   10  12  14  16  18  20

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0,iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    printf("Table of %d is :\n",iNo);

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
    }
        
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}