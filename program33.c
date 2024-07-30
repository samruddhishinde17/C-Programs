// Problems on Numbers
// For loop
//Write a program that takes an integer input from the user and displays only half of that given no.

#include<stdio.h>
#include<stdbool.h>

void Display(int iNo)
{
    int iCnt = 0;
    //      1          2          3
    for(iCnt = 1; iCnt <= iNo/ 2; iCnt++)
    {
        printf("%d\n",iCnt);    // 4
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
