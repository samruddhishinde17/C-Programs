// Problems on N numbers
// STATIC ARRAY Concept

#include<stdio.h>

// void Display(int *ptr, int iSize)
void Display(int ptr[], int iSize)
{
    int i = 0;

    //    1      2      3     
    for(i = 0; i < iSize; i++)
    {
        printf("%d\n",ptr[i]); // 4
        // printf("%d\n",*(ptr + i));
    }
}

int main()
{
    int Arr[5] = {10,20,30,40,50};

    Display(Arr,5);   // Display(100,5);    

    return 0;
}