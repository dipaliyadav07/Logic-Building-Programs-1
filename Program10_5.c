// Logic Building - Assignment 10
// Question 5
// Write a program which accept area in square feet and convert it into square meter
// 1 square feet = 0.0929 square meter
// Input : 5
// Output : 0.464515

#include<stdio.h>

double SquareMeter(int iValue)
{
    double fSqMeter = 0.0;
    fSqMeter = (iValue * 0.0929);
    return fSqMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet :\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is :%f\n",dRet);

    return 0;
}