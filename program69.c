// Problems on Patterns Printing
// Dynamic Pattern
// WAP which accept the Frequency from user and then prints the upto tht number 

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;

   for (iCnt = 1; iCnt <= iNo; iCnt++)
   {
      printf("%d\t",iCnt);
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