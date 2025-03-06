// Problems on String
// Write a program which accepts the single character from user and checks whether the given character is capital or not.

#include<stdio.h>

void CheckCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {   
        printf("It is a capital letter\n");
    }
    else
    {   
        printf("It is not a capital letter\n");
    }
}

int main()
{
    char cValue;

    printf("Enter one character : \n");
    scanf("%c",&cValue);

    CheckCapital(cValue);

    return 0;
}