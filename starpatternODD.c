#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the no of lines you want to draw odd pattern for");
    scanf("%d", &n);
    for(i=1; i<=n; i++) 
    {
        for (int j = 0; j < 2*i-1; j++)
        {
    
            
          printf("*");
        

        }
       printf("\n");
        
    }
    

return 0;
}