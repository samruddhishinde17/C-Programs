// Problems on String
// Write a program which accepts the string from user and convert it into a lower case.

#include<stdio.h>

void strlwrX(char *str)
{
    while (*str != '\0')
    {
        (*str) = (*str) + 32;     //Actually wrong
        str++;
    }
    
}

int main()
{
    char Arr[30];

    printf("Enter the string = ");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("Updated string is = %s\n",Arr);

    return 0;
}