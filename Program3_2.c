// Logic Building - Assignment 3
// Question 2
// Write a program which accept one number from user and print even factors of that number

// Input : 24
// Output : 1	2	4	6	8	12

#include<stdio.h>

void DisplayFactors(int iNo)
{
	int i = 0;
	
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	
	for (i = 1; i <= iNo/2; i++)
	{
		if((iNo % i == 0) && (i % 2 ==0))
		{
			printf("%d\t",i);
		}
	}
}
int main()
{
	int iValue = 0;
	
	printf("Enter number \n");
	scanf("%d",&iValue);

	DisplayFactors(iValue);

	return 0;
}