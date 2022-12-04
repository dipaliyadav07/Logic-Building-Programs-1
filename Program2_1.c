// Logic Building - Assignment 2
// Question 1
// Accept one number from user and print that number * on screen

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;

	for(iCnt = 0; iCnt < iNo; iCnt++)
	{
		printf("*");
	}
}
int main()
{
	int iValue = 0;

	printf("Enter number \n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}