// Problems on digits
// Write a program which accepts the 2 no from user as x and y and the gives the result as x raise to y. i.e if iput is x = 10 , y = 2.... so ans is 100.

#include<stdio.h>

int Power(int iNo1, int iNo2)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;
    }
    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter 1st no = \n");
    scanf("%d", &iValue1);
    
    printf("Enter 2nd no = \n");
    scanf("%d", &iValue2);

    iRet = Power(iValue1, iValue2);

    printf("Answer is = %d\n",iRet);

    return 0;
}