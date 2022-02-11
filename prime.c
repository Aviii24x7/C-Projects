//prime no. using loop
#include<stdio.h>
int main()
{
    int i, num, prime=0;
    printf("enter a no.");
    scanf("%d",&num);

    for(i=2;i<num;i++)
    {

        if(num%i==0){
            prime=1;
       break;}
    }

    if(prime==1)
   {
        printf("this is not a prime no.");}
   else
   {
       printf("YES!  this is a prime no.");}


    return 0;
}
