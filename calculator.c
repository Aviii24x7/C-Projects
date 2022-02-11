#include<stdio.h>
int main()
{
    float a, b; 
    char oper;
    printf("enter a no.");
    scanf("\n %d",&a);
    printf("\nenter the operation you want to perform(+ OR - OR * OR /)");
    scanf("\n %c",&oper);
     printf("enter another no.");
    scanf("\n %d",&b);

switch (oper)
{
case '+':
    printf("&d",a+b);
    break;
case '-':
     printf("%d",a-b);
     break;
     case '*':
    printf("&d",a*b);
    break;
case '/':
     printf("%d",a/b);
     break;
default:
     printf("ENTER A VALID OPERATION");
    break;
}

return 0;



}