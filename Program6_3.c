// Logic Building - Assignment 6
// Question 3
// Write a program which accept two numbers from user and check whether that number is equal or not

// Input : 10	10
// Output : Equal

// Input : 10	12
// Output : Not equal

#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckEqual(int iNo1, int iNo2)
{
	if(iNo1 == iNo2)
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
	int iValue1 = 0, iValue2 = 0;
	BOOL bRet = FALSE;

	printf("Please enter two numbers\n");
	scanf("%d %d",&iValue1,&iValue2);

	bRet = CheckEqual(iValue1,iValue2);

	if(bRet == TRUE)
	{
		printf("Equal\n");
	}
	else
	{
		printf("Not Equal\n");
	}

	return 0;
}