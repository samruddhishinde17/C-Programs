#include<stdio.h>

int main()
{   
    float fValue1, fValue2, fResult = 0.0f;

    printf("Enter the 1st no = \n");
    scanf("%f", &fValue1);

    printf("Enter the 2nd no = \n");
    scanf("%f", &fValue2);

    fResult = fValue1+fValue2;

    printf("Addition is = %d\n",fResult);
    
    return 0;
}