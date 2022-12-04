// Logic Building - Assignment 3
// Question 5
// Accept one character from user and check whether that character is vowel (a,e,i,o,u) or not

// Input : E		Output : TRUE
// Input : d		Output : FALSE

#include<stdio.h>

# define TRUE 1
# define FAlSE 0

typedef int BOOL;

BOOL CheckVowel(char cNo)
{
		if(cNo == 'a' || cNo == 'e' || cNo == 'i' || cNo == 'o' || cNo == 'u' || cNo == 'A' || cNo == 'E' || cNo == 'I' || cNo == 'O' || cNo == 'U')
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
	char cValue = '\0';
	BOOL bRet;
	
	printf("Enter character \n");
	scanf("%c",&cValue);

	bRet = CheckVowel(cValue);

	if(bRet == TRUE)
	{
		printf("It is a vowel");
	}
	else
	{
		printf("It is not vowel");
	}
	
	return 0;
}