// WAP which checks the given no is divisible by 4 or notS

#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if ((iNo % 4) == 0 )
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the no = \n");
    scanf("%d",&iValue);

    iRet = CheckDivisible(iValue);

    if (iRet == true)
    {
        printf("%d is divisible by 4\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 4\n",iValue);
    }
    
    return 0;
}