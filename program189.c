// Problems on String
// Using for loop
// Write a program which accepts the string from user and display single single character one by one.

#include<stdio.h>

void Display(char *str)   
{
    int iCnt = 0;

    for (iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        printf("%c\n",str[iCnt]);
    }
}

int main()
{
    char Arr[100];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}