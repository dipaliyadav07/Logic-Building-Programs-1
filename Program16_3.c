// Logic Building - Assignment 16
// Question 3
// Accept N numbers from user and accept another number as NO, return index of last occurence of that NO.
// Input : N :  6
//         NO : 66 
//         Elements : 85    66  3   66  93  88
//  Output : 3

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iLength-1 ; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    
    return iCnt;   
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    printf("Enter the number of which you want the frequency :\n");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = LastOcc(p , iSize, iValue);
    
    if(iRet == -1)
    {
        printf("There is no such number in array");
    }
    else 
    {
        printf("Last Occurence of number %d is at index : %d\n",iValue,iRet);
    }
    free(p);

    return 0;
}