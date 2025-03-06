// Problems on String
//Write a program which accepts the string from user and display the no of Vowels in that string. (Include only capital vowels)

#include<stdio.h>

int CountVowel(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))    
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

    iRet = CountVowel(Arr); 

    printf("Length of Vowels in string is : %d\n",iRet);

    return 0;
}