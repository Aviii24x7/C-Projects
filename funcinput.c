#include<stdio.h>
int sum(int a, int b, int c);
int subtract(int a, int b, int c);

int main()
{
    char sign;
    int a,b;
    printf("what action do you want to perform? '+' or '-'");
    scanf("%c", 'sign');

    if(sign='+'){
        sum(int a, int b);

    else(sign='-')
        subtract(int a, int b);}

    return 0;
}

int sum(int a, int b, int c)
{
    printf("tell the two no.s you want to perform action with.");
    scanf("%d \t %d", a, b);
    c=a+b;
    printf("the sum of %d and %d is %d",&a,&b,&c);
    return c;
}
int subtract(int a, int b, int c)
{
    printf("tell the two no.s you want to perform action with.");
    scanf("%d \t %d", a, b);
    c=a-b;
    printf("the subtraction of %d and %d is %d",&a, &b, &c);
    return c;
}
