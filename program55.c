// Problems on Digits
// WAP which accepts the number from user and will returns the no of digits in that number

#include<stdio.h>

int CountDigit(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -(iNo);
    }
    
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCount++;
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number = ");
    scanf("%d", & iValue);

    iRet = CountDigit(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}