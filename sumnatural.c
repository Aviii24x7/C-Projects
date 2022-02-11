//sum of N natural no.s
#include<stdio.h>
int main()
{
    int n, i=1, sum=0;
     printf("enter a number");
     scanf("%d",&n);
 while(i<=n) //n=3
 {
  sum= sum + i;
  i++;


 }
    printf("sum of %d natural numbers is %d",i-1 ,sum);

return 0;
}
