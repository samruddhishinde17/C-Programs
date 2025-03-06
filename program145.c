// Problems on N numbers
// DYNAMIC ARRAY Concept, Call By Address Concept
// Write a program which accept the array from user,and make them double... (Eg.: 11=22, 20=40.....)

#include<stdio.h>
#include<stdlib.h>

void Double(int Arr[], int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        Arr[i] = (Arr[i] * 2);
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
    
    Double(Brr,iCount);
    printf("Array after double = \n");
    for (i = 0; i < iCount; i++)
    {
        printf("%d\n", Brr[i]);
    }
    
    free(Brr);
    return 0;
}
