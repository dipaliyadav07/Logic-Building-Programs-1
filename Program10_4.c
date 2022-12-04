// Logic Building - Assignment 10
// Question 4
// Write a program which accept distance in Fahrenheit and convert it into celsius
// 1 celsius = (Fahrenheit - 32) *(5/9)
// Input : 10
// Output : -12.2222    (10 -32) * (5/9)

#include<stdio.h>

double FhtoCs(float fTemp)
{
    float fCel = 0.0f;
    fCel = ((fTemp - 32) * 0.5555);
    return fCel;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius is :%f\n",dRet);

    return 0;
}