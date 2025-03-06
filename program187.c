// Problems on String
// Write a program to accept a string from user and returns the "_" where the spaces occurs.

#include<stdio.h>

void UpdateString(char *str)   
{
    while(*str != '\0')
    {   
        if(*str == ' ')
        {
           *str = '_';
        }
        str++;
    }
}

int main()
{
    char Arr[100];
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    UpdateString(Arr);

    printf("Updated string is %s\n",Arr);
    
    return 0;
}