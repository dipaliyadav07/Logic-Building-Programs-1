// Logic Building - Assignment 7
// Question 3
// Write a program which accept number from user and print its number line

// Input : 4
// Output : -4  -3  -2  -1  0   1   2   3   4

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    int iRev = iNo;

    iNo == -iNo;

    iCnt = iNo;
    while(iCnt == iRev)
    {
        printf("%d\n", iCnt);
        iCnt++;
    }
        
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}