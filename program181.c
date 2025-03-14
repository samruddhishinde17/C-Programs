// Problems on String
// Write a program to accept a string and a character from the user and return the position at which the character occurs first.

#include<stdio.h>
#include<stdbool.h>

int CheckOccurance(char *str, char ch)   
{
    int iCnt = 1;
    bool bFlag = false;

    while(*str != '\0')
    {   
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        iCnt++;
        str++;
    }

    if (bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    } 
}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);
    
    printf("Enter the character that you want to search : \n");
    scanf(" %c", &cValue);                                              //Added single space before "%c"
 
    iRet = CheckOccurance(Arr, cValue);

    if(iRet == -1)
    {
        printf("There is no such letter\n");
    }
    else
    {
        printf("Letter occure at position %d\n",iRet);
    }
    return 0;
}