// Problems on Numbers
// WAP which accepts the number from user and return the factorial of that number.

// Input : 5
// Output : 1 * 2 * 3 * 4 * 5 = 120

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the no = \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is = %d",iRet);

    return 0;
}