// Problems on Pattern printing

/*
    iRow = 4
    iCol = 4

    $   2   3   4
    1   $   3   4
    1   2   $   4
    1   2   3   $        

*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)        // Filter
    {
        printf("Number of rows and number of columns should be same\n");
        return;
    }
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if (i == j)
            {
                printf("$\t");
            }
            else
            {
                printf("%d\t",j);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2= 0;

    printf("Enter the no of rows = ");
    scanf("%d",&iValue1); 

    printf("Enter the no of columns = ");
    scanf("%d",&iValue2); 

    Display(iValue1, iValue2);

    return 0;
}