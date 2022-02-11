//swapping two numbers
#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("enter the first no.=");
    scanf("%d",&num1);
    printf("second no. please=");
    scanf("%d", &num2);
    num1 = num2;
    num2 = num3;
    num3 = num1;
    printf("numbers are swaped, first no. is %d and second no. is %d",num1,num2);
    return 0;


}
