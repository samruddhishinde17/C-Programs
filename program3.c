#include<stdio.h>

int main()
{   
    int iValue1, iValue2, iResult = 0;

    printf("Enter the 1st no = \n");
    scanf("%d", &iValue1);

    printf("Enter the 2nd no = \n");
    scanf("%d", &iValue2);

    iResult = iValue1+iValue2;

    printf("Addition is = %d\n",iResult);
    
    return 0;
}