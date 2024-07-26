//Accpet the no from user and check whether that no is divisible by 3 & 5

#include<stdio.h>
#include<stdbool.h>

// User is going to enter only positve inputs

// Algirithm
/*
    START
        Accept one number as Value
        Divide that number Value by 3
        If remainder is 0
        Divide that number Value by 5
        If remainder is 0
        then print number is divisible by 3 and 5
        otherwise display the it is not divisble by 3 , 5
    STOP
*/

////////////////////////////////////////////////////////////
//
//  Function Name :     CheckDivisible
//  Description :       Used to check whether number is divisible by 3 & 5
//  Input :             Integer
//  Output :            Boolean
//  Author :            Samruddhi Santosh Shinde
//  Date :              16/04/2024
//
////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if(((iNo % 3) && (iNo % 5)) == 0)
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
    int Value = 0;
    bool bRet = false;

    printf("Enter the no = \n");
    scanf("%d",&Value);

    bRet = CheckDivisible(Value);

    if (bRet == true)
    {
        printf("%d is divisible by 3 & 5 both",Value);
    }
    else
    {
        printf("%d is not divisible by either 3 & 5 or both",Value);
    }
    
    return 0;
}