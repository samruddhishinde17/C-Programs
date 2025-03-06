// Problems on N numbers
// DYNAMIC ARRAY Concept, Call By Address Concept
// Write a program which accept the N no from user and from that N no, the no which are greater than 100 then set that no to zero.

#include<stdio.h>
#include<stdlib.h>

void Updator(int Arr[], int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] > 100)
        {
            (Arr[i] = 0);
        }
    }
}

int main()
{
    int *Brr = NULL;
    int iCount = 0, i = 0;

    printf("Enter the no of elements that you want = \n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount *sizeof(int));

    printf("Enter the elements = \n");
    for (i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }
    
    Updator(Brr,iCount);
    printf("Data after updation \n");
    for (i = 0; i < iCount; i++)
    {
        printf("%d\n", Brr[i]);
    }
    
    free(Brr);
    return 0;
}
