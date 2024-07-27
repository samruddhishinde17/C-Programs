//Using FILTER concept
//Accept the no from user as a percentage and display whether the student pass or fail

#include<stdio.h>

int DisplayResult(float fMarks)
{
    if ((fMarks < 0.0f) || (fMarks > 100))
    {
        return 1;
    }

    if ((fMarks >= 35.0f) && (fMarks <= 100))
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

int main()
{
    float fNo = 0.0f;
    int iRet = 0;

    printf("Enter your Percentage = \n");
    scanf("%f",&fNo);

    iRet = DisplayResult(fNo);

    if(iRet == 1)
    {
        printf("Invalid Input\n");
    }
    else if (iRet == 2)
    {
        printf("Student is pass in the exam\n");
    }
    else if(iRet == 3)
    {
        printf("Student is fail in the exam\n");
    }
    
    return 0;
}

