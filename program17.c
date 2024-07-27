//Using MACRO concept
//Accept the no from user as a percentage and display whether the student got which class

/*
    0 to 35     Fail                            (35 is exclusive)
    35 to 50    Pass class                      (50 is exclusive)
    50 to 60    Second class                    (60 is exclusive)
    60 to 75    First class                     (75 is exclusive)
    75 to 100   First class with distinction    (100 is inclusive)
*/
#include<stdio.h>

#define RET_INVALID -1

#define RET_FAIL 1
#define RET_PASSCLASS 2
#define RET_SECONDCLASS 3
#define RET_FIRSTCLASS 4
#define RET_DESTINCTION 5

int DisplayResult(float fMarks)
{
    if ((fMarks < 0.0f) || (fMarks > 100))
    {
        return RET_INVALID;
    }

    if ((fMarks > 0.0f) && (fMarks < 35))
    {
        return RET_FAIL;
    }
    else if ((fMarks >= 35) && (fMarks < 50))
    {
        return RET_PASSCLASS;
    }
    else if ((fMarks >= 50) && (fMarks < 60))
    {
        return RET_SECONDCLASS;
    }
    else if ((fMarks >= 60) && (fMarks < 75))
    {
        return RET_FIRSTCLASS;
    }
    else if((fMarks >= 75) && (fMarks <= 100))
    {
        return RET_DESTINCTION;
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
    else if (iRet == RET_FAIL)
    {
        printf("Student is FAIL in the exam\n");
    }
    else if(iRet == RET_PASSCLASS)
    {
        printf("Student is having PASS Class in the exam\n");
    }
    else if(iRet == RET_SECONDCLASS)
    {
        printf("Student is having SECOND Class in the exam\n");
    }
    else if(iRet == RET_FIRSTCLASS)
    {
        printf("Student is having FIRST class in the exam\n");
    }
    else if(iRet == RET_DESTINCTION)
    {
        printf("Student is having DISTINCTION in the exam\n");
    }
    
    return 0;
}