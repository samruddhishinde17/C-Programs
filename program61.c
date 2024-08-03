// Problems on Digits
// WAP which accepts the number from user and will returns the nummber of digits which are greater than 5 (5)

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if (iDigit > 5)
        {
            iCount++;
        } 
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number = ");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("No of digit which are greater than 5 = %d\n",iRet);

    return 0;
}