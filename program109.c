// Problems on Pattern printing

/*
    iRow = 4
    iCol = 4

    1
    1   2
    1   2   3
    1   2   3   4

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


    //    1        2       3    
    for(i = 1; i <= iRow; i++)  // Outer
    {   //    1         2      3 
        for(j = 1; j <= iCol; j++)  // Inner
        {
            if(i >= j)  // Lower triangle
            {
                printf("%d\t",i);
            }
        }
        printf("\n");
    }
}
    
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the no of rows = \n");
    scanf("%d",&iValue1);

    printf("Enter the no of columns = \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}