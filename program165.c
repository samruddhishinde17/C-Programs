// Problems on String
//Without using "strlen" inbuild function
//Write a program which accepts the string from user and display the no of characters in that string.

#include<stdio.h>

int strlenX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr); // strlenX(100)

    printf("Length of string is : %d\n",iRet);

    return 0;
}