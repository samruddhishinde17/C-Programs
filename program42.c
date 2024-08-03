// Problems on Numbers
// Using UPDATER concept
//WAP to check whether the given no is Prime no or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -(iNo);     //Updater  (i.e -28 = -(28) = 28)
    }
    
   for (iCnt = 2; iCnt <= (iNo/2) ; iCnt++)
   {
      if ((iNo % iCnt) == 0)
      {
        iCount++;
      }
   }

   if (iCount == 0)
   {
      return true;
   }
   else
   {
      return false;
   }  
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the no = ");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is Prime number \n",iValue);
    }
    else
    {
        printf("%d is not a Prime number \n",iValue);
    }

    return 0;
}