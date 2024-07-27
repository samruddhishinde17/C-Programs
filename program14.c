//Using FILTER concept
//Accept the no from user as a percentage and display whether the student pass or fail

#include<stdio.h>
#include<stdbool.h>

bool DisplayResult(float fMarks)
{
    if ((fMarks < 0.0f) || (fMarks > 100))
    {
        printf("Invalid Input\n");
        return false;
    }

    if ((fMarks >= 35.0f) && (fMarks <= 100))
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
    float fNo = 0.0f;
    bool bRet = false;

    printf("Enter your Percentage = \n");
    scanf("%f",&fNo);

    bRet = DisplayResult(fNo);

    if (bRet == true)
    {
        printf("Student is pass in the exam\n");
    }
    else
    {
        printf("Student is fail in the exam\n");
    }
    
    return 0;
}

