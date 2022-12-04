// Logic Building - Assignment 4
// Question 5
// Write a program which accept number from user and return difference between summation of all its factors and non-factors

// Input : 12
// Output : 16 - 50 = -34

// Input : 10
// Output : 8 - 37

#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt = 0;
	int iSumFact = 0;
	int iSumNonFact = 0;
	int iDiff = 0;

	for (iCnt = 1; iCnt <= iNo/2; iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iSumFact = iSumFact + iCnt;
		}
	}
	for (iCnt = 1; iCnt <= iNo; iCnt++)
	{
		if(iNo % iCnt != 0)
		{
			iSumNonFact = iSumNonFact + iCnt;
		}
	}
	iDiff = iSumFact - iSumNonFact;
	
	return iDiff;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number \n");
	scanf("%d",&iValue);

	iRet = FactDiff(iValue);

	printf("\n Difference between Summation of Factors and Non-Factors is : %d\n",iRet);

	return 0;
}