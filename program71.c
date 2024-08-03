// Problems on Patterns Printing
// WAP which print the pattern "1 * 2 * 3 *" upto given number from user.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    //      1           2          3 
    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);    // 4
        printf("*\t");          // 4
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);    // Display(4)

    return 0;
}