// Problems on Numbers
// Using FILTER concept
//WAP to check whether the given no is Perfect or not.

#include<stdio.h>
#include<stdbool.h>

/*
    Accept number as No
    Search all its factors
    Perform addition of all the factors
    If adddition is same as No
    then Display as No is perfect number
    otherwise Display as No is noyt perfect number
*/

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if (iNo < 0)
    {
        printf("Please enter only positive number");     //Filter
        return false;
    }
    
    for (iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

   if (iSum == iNo)
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

    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is perfect number \n",iValue);
    }
    else
    {
        printf("%d is not a perfect number \n",iValue);
    }

    return 0;
}