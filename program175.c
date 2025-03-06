// Problems on String
//Write a program which accepts the string from user and check whether the letter "W,w" is present in it or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckOccurance(char *str)   // Case Insensitive
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if((*str == 'w') || (*str == 'W'))
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);
    
    bRet = CheckOccurance(Arr); // strlenX(100)

    if(bRet == true)
    {
        printf("w is present in string\n");
    }
    else
    {
        printf("w is not present in string\n");
    }

    return 0;
}