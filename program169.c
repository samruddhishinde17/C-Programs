// Problems on String
//Write a program which accepts the string from user and display the no of Small characters in that string.

#include<stdio.h>

int strlenSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 97) && (*str <= 122))    //Using ASCII value
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

    iRet = strlenSmall(Arr); 

    printf("Length of Small letter in string is : %d\n",iRet);

    return 0;
}