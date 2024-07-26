//Accept a no from user and check whether the no even or odd

#include<stdio.h>
#include<stdbool.h>

// Algorithm
/*
//  START
     Accept 1 no as No
     Divide that no No by 2
     If remainder is 0
     Then display the result as Even no
     Otherwise display the result as Odd no
  STOP
*/

bool CheckEvenOdd(unsigned int iNo)
{
    if ((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////
//
//  Function Name :     CheckEvenOdd
//  Description :       Used to check whether number is even or odd
//  Input :             Integer
//  Output :            Boolean
//  Author :            Samruddhi Santosh Shinde
//  Date :              16/04/2024
//
////////////////////////////////////////////////////////////

int main()
{   
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter no = \n");
    scanf("%u", &iValue);

    bRet = CheckEvenOdd(iValue);

    if (bRet == true)
    {
        printf("%d is even no\n",iValue);
    }
    else
    {
        printf("%d is odd no\n",iValue);
    }
    return 0;
}