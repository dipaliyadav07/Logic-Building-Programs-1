// Logic Building - Assignment 9
// Question 1
// Write a program which accept number from user and display below pattern
// Input : 5
// Output : *   *   *   *   *   #   #    #   #  # 

#include<stdio.h>

void Display(int iNo)    //time complexity - 2N
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }   
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       printf("#\t");
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