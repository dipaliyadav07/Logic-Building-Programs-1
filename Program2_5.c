// Logic Building - Assignment 2
// Question 5
// Accept a number from user and check whether number is even or odd

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
	if(iNo % 2 == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE; 
	}
}
int main()
{
	int iValue = 0;
	BOOL bRet;

	printf("Enter number \n");
	scanf("%d",&iValue);

	bRet = CheckEven(iValue);

	if(bRet == TRUE)
	{
		printf("Entered Number is Even");
	}
	else
	{
		printf("Entered Number is Odd");
	}
	
	return 0;
}