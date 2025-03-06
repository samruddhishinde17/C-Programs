// Problems on String
//Write a program which accepts the full name and display it on the screen.

#include<stdio.h>

int main()
{
char Arr[50];

printf("Enter your full name = \n");
scanf("%[^'\n']s",Arr);                     //Correct scanf function(REGULAR EXPRESSION i.e RegX)
 
printf("Hello %s\n", Arr);

return 0;
}