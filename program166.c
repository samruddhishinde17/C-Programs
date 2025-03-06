// Problems on String
//Write a program which accepts the string from user and display the no of Capital characters in that string.

#include<stdio.h>

int strlenCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
           iCnt++;
        }
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

    iRet = strlenCapital(Arr); 

    printf("Length of capital letter in string is : %d\n",iRet);

    return 0;
}