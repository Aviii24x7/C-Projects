#include<stdio.h>
int multable(int *table, int n)
{  

    for (int i = 0; i < 10; i++)
    {   
        table[i]= n*(i+1);
    }
    
}
int main()
{
    int n;
    printf("enter the no, you wnat to find the table of:");
    scanf("%d",&n);
    int table[n][10];
    
    multable(table[n],n);
return 0;
}