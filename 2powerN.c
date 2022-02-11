// 2^n

#include<stdio.h>
int main()
{
    int num, i=1, ans=1;

    printf("enter the power of 2");
    scanf("%d",&num);
//WHILE LOOP
  /*  while(num>=i)
    {
     ans *= 2;
     i++;
    }
    */
//FOR LOOP

 /*  for(ans=1; i<=num; i++)
        ans*=2;    */

   do {
    ans*=2;
    i++;
   }
   while(i<=num);

    printf("%d",ans);
    return 0;
}
