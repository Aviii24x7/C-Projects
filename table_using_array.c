#include<stdio.h>
int main()
{
    int arr[10];
    int n;
    printf("\n which no. you want to finf the table of? \n ans:");
    scanf("%d",&n);

    
    for(int i=0;i<=10;i++)
    {
        arr[i]= n*(i+1);
        printf("%d*%d  = %d\n",n, i+1, arr[i]);
    }

return 0;
}