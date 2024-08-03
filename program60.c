// Problems on Digits
// WAP which accepts the number from user and will returns the odd digits from that number

#include<stdio.h>

int CountOddDigits(int iNo)
{
   int iDigit = 0;
   int iCount = 0;

   if (iNo < 0)
   {
      iNo = -(iNo);
   }

   while (iNo > 0)
   {
      iDigit = iNo % 10;
      iNo = iNo / 10;

      if ((iDigit % 2) != 0)
      {
        iCount++;
      } 
   }
   return iCount; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number = ");
    scanf("%d", &iValue);

    iRet = CountOddDigits(iValue);

    printf("No of odd digit are = %d\n",iRet);

    return 0;
}