// Problems on String
//Without using "strlen" inbuild function
//Write a program which accepts the string from user and display the no of characters in that string.

#include<stdio.h>

int strlenX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);   // Display(100)

    printf("String length is : %d\n",iRet);

    return 0;
}