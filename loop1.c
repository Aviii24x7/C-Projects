//no. of digits in a no.
#include<stdio.h>
int main()
{
    int num, counter=0;
    printf("enter a no.");
    scanf("%d",&num);

    while(num>0)
    {
        num/= 10;
        counter++;
    }
 printf("the no. of digits are %d",counter);
return 0;}
