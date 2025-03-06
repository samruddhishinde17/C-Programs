// Problems on N numbers
// DYNAMIC ARRAY Concept, Call By Address Concept
// Write a program which accept the N no from user and from that N no if any element is a even element then we should add 1 in that even element.

#include<stdio.h>
#include<stdlib.h>

void Updator(int Arr[], int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            (Arr[i])++;
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
