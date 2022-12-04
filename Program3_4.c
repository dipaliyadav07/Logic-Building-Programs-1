// Logic Building - Assignment 3
// Question 4
// Accept one character from user and convert case of that character 

// Input : a		Output : A
// Input : D		Output : d

#include<stdio.h>

void DisplayConvert(char cValue)
{
		if(cValue >= 'a' && cValue <= 'z')
		{
			cValue = cValue - 32;
			printf("Uppercase is : %c\n",cValue);
		}
		else
		if(cValue >= 'A' && cValue <= 'Z')
		{
			cValue = cValue + 32;
			printf("Lowercase is : %c\n",cValue);
		}
}
int main()
{
	char cValue = '\0';
	
	printf("Enter character \n");
	scanf("%c",&cValue);

	DisplayConvert(cValue);

	return 0;
}