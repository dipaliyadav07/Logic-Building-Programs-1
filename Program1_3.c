// Logic Building - Assignment 1
// Question 3
// Program to print 5 to 1 numbers on screen

#include<stdio.h>

void Display()
{
	int i = 0;

	for(i = 5; i > 0; i--,i--)
	{
		printf("%d",i);
		i++;
	}

	
}
int main()
{
	Display();

	return 0;
}