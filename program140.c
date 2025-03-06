// Problems on N numbers
// DYNAMIC ARRAY Concept, Call By Address Concept
// Write a program which accept the N no from user and then update the every value by 1 .

#include<stdio.h>
#include<stdlib.h>

void Updator(int Arr[], int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        Arr[i] = Arr[i] + 1;    // here is the change
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