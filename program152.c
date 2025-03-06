// Problems on String
// Write a program which accepts the single character from user and checks whether the given character is capital or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {     return true;      }
    else
    {    return false;      }
}

int main()
{
    char cValue;
    bool bRet = false;

    printf("Enter one character =\n");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);
    if(bRet == true)
    {
        printf("It is a capital letter\n");
    }
    else
    {
        printf("It is not a capital letter\n");
    }

    return 0;
}