// Accept the no from user & check whether the no ins in between range 30 to 50

// Algirithm
/*
    START
        Accept one number as iValue
        Check that iValue is in between 30 to 50
        If iValue is in betwwn 30 to 50
        Then display "Given no is in between range 30 to 50"
        Otherwise display "Given no is not in between range 30 to 50"  
    STOP
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckRange(int iNo)
{
   if((iNo >= 30) && (iNo <=50))
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

    printf("Enter the no = \n");
    scanf("%d",&iValue);

    bRet = CheckRange(iValue);

    if (bRet == true)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    return 0;
}