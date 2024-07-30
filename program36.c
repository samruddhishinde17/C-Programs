// Problems on Numbers
// For loop
//WAP to write a addition of given no of factors.

#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    //      1          2          3
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        
        iSum = iSum + iCnt;     // 4   
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("Summation of factors is = %d", iRet);

    return 0;
}
