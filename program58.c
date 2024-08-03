// Problems on Digits
// WAP which accepts the number from user and will returns the even digits from that number

#include<stdio.h>

void DisplayEvenDigits(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -(iNo);
    }
    
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if ((iDigit % 2) == 0)
        {
           printf("%d\n", iDigit);
        }  
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number = ");
    scanf("%d",&iValue);

    DisplayEvenDigits(iValue);

    return 0;
}