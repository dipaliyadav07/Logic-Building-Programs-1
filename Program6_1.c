// Logic Building - Assignment 6
// Question 1
// Write a program which accept name from user and print that name

// Input : Don
// Output : Don

#include<stdio.h>

int main()
{
	char Name[30];
	
	printf("Please enter full name :");
	scanf("%s",&Name);

	printf("Your name is %s\n",Name);
	
	return 0;
}