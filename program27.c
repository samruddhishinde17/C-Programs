//Using "DYNAMIC FOR LOOP" Concept 
//Ask the user that how many times you want to display the "1,2,3,4" on the screen and print according that.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of times you want to display numbers on screen : ");
    scanf("%d",&iValue);

    Display(iValue);         

    return 0;
}