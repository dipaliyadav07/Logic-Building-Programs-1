// Logic Building - Assignment 4
// Question 1
// Write a program which accept one number from user and display its multiplication of factors

// Input : 12
// Output : 144		(1 * 2 * 3 * 4 * 6)

// Input : 13
// Output : 1		(1)

// Input : 10
// Ouput : 10		(1 * 2 * 5)

#include<stdio.h>

int MultFact(int iNo)
{
	int i = 0;
	int iMult = 1;

	printf("Factors are : \n");
	
	for (i = 1; i <= iNo/2; i++)
	{
		if(iNo % i == 0)
		{
			printf("%d\t",i);
			iMult = iMult * i;
		}
	}
	return iMult;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number \n");
	scanf("%d",&iValue);

	iRet = MultFact(iValue);
	printf("\nMultiplication of factors is %d\n",iRet);

	return 0;
}