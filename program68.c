// Problems on Patterns Printing
// Dynamic Pattern
// WAP which accept the Frequency from user and then prints the "*" 

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;

   for (iCnt = 1; iCnt <= iNo; iCnt++)
   {
      printf("*\t");
   }
   
   printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter frequency = \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}