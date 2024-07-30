// Problems on Numbers
// Time Complexity Concept      
//WAP to find the factorial of given no upta that given no.

#include<stdio.h>
#include<stdbool.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("Factor of %d are = \n",iNo);

    // Time Complexity : O(N/2)
    //      1          2          3
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        
        printf("%d\n",iCnt);     // 4   
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}
