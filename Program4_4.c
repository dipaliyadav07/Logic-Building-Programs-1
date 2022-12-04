// Logic Building - Assignment 4
// Question 4
// Write a program which accept number from user and return summation of all its non-factors

// Input : 12
// Output : 5	7	8	9	10	11 = 50

// Input : 10
// Output : 37

#include<stdio.h>

int SumNonFact(int iNo)
{
	int iCnt = 0;
	int iSum = 0;

	for (iCnt = 1; iCnt <= iNo; iCnt++)
	{
		if(iNo % iCnt != 0)
		{
			printf("%d\t",iCnt);
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number \n");
	scanf("%d",&iValue);

	iRet = SumNonFact(iValue);

	printf("\n Summation of Non-Factors is : %d\n",iRet);

	return 0;
}