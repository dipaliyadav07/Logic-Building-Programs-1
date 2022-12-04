// Logic Building - Assignment 7
// Question 5
// Write a program which accept n number and print first 5 multiples of n

// Input : 4
// Output : 4   8   12  16  20

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    printf("First five multiples of %d are :\n",iNo);

    for(iCnt = 1; iCnt <= 5; iCnt++)
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

    MultipleDisplay(iValue);

    return 0;
}