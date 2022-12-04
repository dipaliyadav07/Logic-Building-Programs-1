// Logic Building - Assignment 10
// Question 2
// Write a program which accept weight & height of rectangle from user and calculate its area
// Area = width * height
// Input : 5.3  9.78
// Output : 51.834

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    float fArea = 0.0f;
    fArea = (fWidth * fHeight);
    return fArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width\n");
    scanf("%f",&fValue1);

    printf("Enter Height\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);
    printf("Area of Rectangle is : %0.2f\n",dRet);

    return 0;
}