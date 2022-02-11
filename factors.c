//factors of a number
#include<stdio.h>
int main()
{
    int num, i;

    printf("enter a numher");
    scanf("%d", &num);
    printf("The factors of the %d are\t", num);

     for(i=1; num>=i; i++)
     {
       if(num%i==0)
         {
             printf("%d,\t",i);
         }
     }
     return 0;
}
