// Logic Building - Assignment 4
// Question 2
// Write a program which accept one number from user and display its factors in decreasing order

// Input : 12
// Output : 6	4	3	2	1

// Input : 13
// Output : 1

#include<stdio.h>
#include<stdlib.h>

void DisplayReverseFactors(int iNo)
{
	int iCnt = 0;
	int iReverse = iNo;
	
	for (iCnt = iReverse; iCnt >= 1; iCnt--)
	{
		if(iNo % iCnt == 0)
		{
			printf("%d\t",iCnt);
		}
	}
	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number \n");
	scanf("%d",&iValue);

	DisplayReverseFactors(iValue);

	return 0;
}