// Logic Building - Assignment 10
// Question 1
// Write a program which accept radius of circle from user and calculate ita area.
// Consider value of PI as 3.14 (Area = PI * Radius * Radius)
// Input : 5.3
// Output : 88.2026

#include<stdio.h>

double CircleArea(float fRadius)
{
    float fArea = 0.0f;
    float PI = 3.14f;

    fArea = (PI * fRadius * fRadius);

    return fArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("Area of Circle is : %0.2f\n",dRet);

    return 0;
}