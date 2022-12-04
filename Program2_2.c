// Logic Building - Assignment 2
// Question 2
// Accept one number from user and print that number * on screen

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;

	while(iNo > iCnt)
	{
		printf("*");
		iNo--;
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