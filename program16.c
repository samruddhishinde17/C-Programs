//Using MACRO concept
//Accept the no from user as a percentage and display whether the student pass or fail

#include<stdio.h>

// User defined macro
#define RET_INVALID 1
#define RET_PASS 2
#define RET_FAIL 3

int DisplayResult(float fMarks)
{
    if ((fMarks < 0.0f) || (fMarks > 100))
    {
        return RET_INVALID;
    }

    if ((fMarks >= 35.0f) && (fMarks <= 100))
    {
        return RET_PASS;
    }
    else
    {
        return RET_FAIL;
    }
}

int main()
{
    float fNo = 0.0f;
    int iRet = 0;

    printf("Enter your Percentage = \n");
    scanf("%f",&fNo);

    iRet = DisplayResult(fNo);

    if(iRet == RET_INVALID)
    {
        printf("Invalid Input\n");
    }
    else if (iRet == RET_PASS)
    {
        printf("Student is pass in the exam\n");
    }
    else if(iRet == RET_FAIL)
    {
        printf("Student is fail in the exam\n");
    }
    
    return 0;
}

