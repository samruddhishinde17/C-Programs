// Problems on Numbers
// Using the concept of "DATA MODIFIER"
// WAP which accepts the number from user and return the factorial of that number.

// Input : 5
// Output : 1 * 2 * 3 * 4 * 5 = 120

#include<stdio.h>

unsigned long long int Factorial(int iNo)
{
    int iCnt = 0;
    unsigned long long int iFact = 1;          //OR =  unsigned long int iFact = 1;

    //      1           2         3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;   // 4
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    unsigned long long int iRet = 0;          //OR = unsigned long int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %lld\n",iRet);

    return 0;
}