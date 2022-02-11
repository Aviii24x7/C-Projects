//reverse of a num
#include<stdio.h>
int main()
{
    int num, rev=0, lg;
printf("enter a no.");
scanf("%d",&num);

    /*for(;num>0;lg=num%10)

        rev=rev*10+lg;
        num /= 10;
*/
       while(num>0)
        {
            lg= num%10;
            rev= rev*10 + lg;
            num= num/10;
        }

printf("reverse no. is %d", rev);
    return 0;
}
