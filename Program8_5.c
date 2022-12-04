// Logic Building - Assignment 9
// Question 1
// Write a program which accept number from user and display below pattern
// Input : 5
// Output : 20  18  16  14  12  10  8   6   5   4   2  

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0,iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    printf("Table of %d in reverse order is :\n",iNo);

    for(iCnt = 10; iCnt >= 1; iCnt--)
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

    TableRev(iValue);

    return 0;
}