// Logic Building - Assignment 20
// Question 1
// Accept number of rows and number of columns from user and display below pattern
// Input :  iRow = 4    iCol = 4
// Output : A   B   C   D
//          A   B   C   D
//          A   B   C   D

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    char i = '\0', j = '\0';
    iRow = iRow + 65;
    iCol = iCol + 65;
     
    for(i = 65; i < iRow; i++)
    {
        for(j = 65; j < iCol; j++)
        {
            printf("%c\t",i);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns :\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}