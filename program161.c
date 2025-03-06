// Problems on String
//Write a program which accepts the 3 letter word from user and display its single single character one by one.

#include<stdio.h>

void Display(char *str)
{
    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;
    
    printf("%c\n",*str);
    str++;
}

int main()
{
char Arr[50];

printf("Enter String = \n");
scanf("%[^'\n']s",Arr);                     
 
Display(Arr);

return 0;
}