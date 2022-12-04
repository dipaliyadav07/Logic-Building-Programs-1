// Logic Building - Assignment 6
// Question 5
// Write a program which accept total marks from user and calculate percentage

// Input : 1000		745
// Output : 74.5%


#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
	float fPercent = 0.0;
	
	fPercent = (float) iNo2/iNo1*100;

	return fPercent;
}

int main()
{
	int iTotal = 0, iObtained = 0;
	float fRet = 0.0;
	
	printf("Please enter total marks\n");
	scanf("%d",&iTotal);

	printf("Please enter obtained marks\n");
	scanf("%d",&iObtained);

	fRet = Percentage(iTotal,iObtained);

	printf("Percentage is : %f\n",fRet);

	return 0;
}