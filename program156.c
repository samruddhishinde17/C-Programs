// Problems on String
// Write a program which accepts the no from user and checks whether the given no is in range or not.

#include<stdio.h>

void CheckDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
    {   
        printf("It is a digit\n");
    }
    else
    {   
        printf("It is not a digit\n");
    }
}

int main()
{
    char cValue;

    printf("Enter one character : \n");
    scanf("%c",&cValue);

    CheckDigit(cValue);

    return 0;
}