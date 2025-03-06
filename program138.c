// Problems on N numbers
// DYNAMIC ARRAY Concept
// Write a program which accept the N no from user and then findout the smallest no from them.

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int i = 0;
    int iMin = Arr[0];

    for (i = 0; i < iSize; i++)
    {
        if (Arr[i] < iMin)
        {
            iMin = Arr[i];
        } 
    }
    return iMin;
}

int main()
{
    int *Brr = NULL;
    int iCount = 0, i = 0, iRet = 0;

    printf("Enter the no of elements that you want = \n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount *sizeof(int));

    printf("Enter the elements = \n");
    for (i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }
    
    iRet = Minimum(Brr,iCount);

    printf("Minimun no is %d\n",iRet);

    free(Brr);
    return 0;
}
