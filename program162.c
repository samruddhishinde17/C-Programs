// Problems on String
//Write a program which accepts the string from user and display single single character one by one.

#include<stdio.h>

void Display(char *str)
{
    while (*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    } 
}

int main()
{
char Arr[50];

printf("Enter String = \n");
scanf("%[^'\n']s",Arr);                     
 
Display(Arr);

return 0;
}