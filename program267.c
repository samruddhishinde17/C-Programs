// Problems on String
// Write a program which accepts the string from user and it toggle the case.

#include<stdio.h>

void strtoggleX(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            (*str) = (*str) - 32;     
        }
        else
        {
            (*str) = (*str) + 32;       //wrong condition
        }
        str++;  
    } 
}

int main()
{
    char Arr[30];

    printf("Enter the string = ");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);

    printf("Updated string is = %s\n",Arr);

    return 0;
}