// Problems on String
// Write a program which accepts the string from user and reverse it.
// Time complexity of this program = n*n/2

#include<stdio.h>

void StrRevX(char *str)   
{
    char *start = str;
    char *end = str;
    char temp;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[100];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("Reverse string is : %s\n",Arr);

    return 0;
}