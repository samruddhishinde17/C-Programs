// Problems on Numbers
// For loop
//WAP which accept the no from user and display the how many factors that no have 

#include<stdio.h>
#include<stdbool.h>

int CountFactors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    //      1          2          3
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        
        iCount++;                   // 4   
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountFactors(iValue);
    printf("No of factors are = %d", iRet);

    return 0;
}
