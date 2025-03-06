// Problems on String
//Write a program which accepts the full name and display it on the screen. (Its accepts till the space)

#include<stdio.h>

int main()
{
char Arr[50];

printf("Enter your full name = \n");
scanf("%s",Arr);                     //Wrong scanf function

printf("Hello %s\n", Arr);

return 0;
}