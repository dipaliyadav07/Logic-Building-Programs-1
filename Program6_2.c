// Logic Building - Assignment 6
// Question 2
// Write a program which accept one number from user and check whether that number is greater than 100 or not

// Input : 101
// Output : Greater

// Input : 39
// Output : Smaller

#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckGreater(int iNo)
{
	if(iNo >= 100)
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
	BOOL bRet = FALSE;

	printf("Please enter number\n");
	scanf("%d",&iValue);

	bRet = CheckGreater(iValue);

	if(bRet == TRUE)
	{
		printf("Greater\n");
	}
	else
	{
		printf("Smaller\n");
	}

	return 0;
}