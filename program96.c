// Problems on Pattern Printing
// Static to Dynamic conversion
// WAP which takes the no of rows and columns as a input and gives the output

/*
    iRow = 3
    iCol = 4

    *   *   *   *   
    *   *   *   *   
    *   *   *   *   
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    //    1        2       3    
    for(i = 1; i <= iRow; i++)  // Outer
    {   //    1         2      3 
        for(j = 1; j <= iCol; j++)  // Inner
        {
            printf("*\t");  // 4
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);
    
    Display(iValue1, iValue2);// Display(3,4);

    return 0;
}

