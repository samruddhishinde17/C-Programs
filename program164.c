// Problems on String
//Using "strlen" inbuild function
//Write a program which accepts the string from user and display the no of characters in that string.

#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter the String = \n");
    scanf("%[^\n]",Arr);

    iRet = strlen(Arr);

    printf("Length of this string is = %d\n",iRet);

    return 0;
}