// Logic Building - Assignment 4
// Question 3
// Write a program which accept number from user and display its non-factors

// Input : 12
// Output : 5	7	8	9	10	11

// Input : 13
// Output : 2	3	4	5	6	7	8	9	10	11	12

#include<stdio.h>

void NonFactors(int iNo)
{
	int iCnt = 0;

	printf("Non-Factors are : \n");

	for (iCnt = 1; iCnt <= iNo; iCnt++)
	{
		if(iNo % iCnt != 0)
		{
			printf("%d\t",iCnt);
		}
	}
	
}

int main()
{
	int iValue = 0;
	
	printf("Enter number \n");
	scanf("%d",&iValue);

	NonFactors(iValue);

	return 0;
}