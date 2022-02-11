#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the no. of lines you want to draw pattern for:");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
     for(j=0; j<2*i ; j++)
     {
         printf("*");
     }
      printf("\n");

    }
   
return 0;
}