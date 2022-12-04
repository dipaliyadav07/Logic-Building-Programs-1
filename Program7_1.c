// Logic Building - Assignment 7
// Question 1
// Write a program which accept number from user print that number of $ & * on screen

// Input : 5
// Output : $   *   $   *   $   *   $   *   $   *

// Input : 3
// Output : $   *   $   *   $   *

// Input : -3
// Output : $   *   $   *   $   *

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}