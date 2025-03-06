// Problems on String
// Write a program which accepts the string from user and display it.

#include<stdio.h>

int main()
{
    char Arr[30];

    printf("Enter the string = ");
    scanf("%[^'\n']s",Arr);

    printf("Entered string is = %s\n",Arr);

    return 0;
}