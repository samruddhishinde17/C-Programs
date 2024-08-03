// Problems on Digits
// WAP which accepts the number from user and will returns the Addition of all even the digits.

#include<stdio.h>

int SumOddDigits(int iNo)
{
    int iDigit = 0, iSum = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if((iDigit % 2) != 0)
        {
        iSum = iSum + iDigit;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number = \n");
    scanf("%d", &iValue);

    iRet = SumOddDigits(iValue);

    printf("Addition of all the odd digits are = %d\n",iRet);

    return 0;
}