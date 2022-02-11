#include<stdio.h>
int main()
{   int j;
    int arr[3][10];
    printf("\n\n");
    printf("table of 2:-\n");
        
        for (j = 0; j < 10; j++)
        {
             arr[0][j]= 2*(j+1);
            printf("2*%d=%d\n",(j+1), arr[0][j]);
        }
        printf("*******************************************************\n");
    
    printf("table of 7:-\n");
        
        for (j = 0; j < 10; j++)
        {
            arr[1][j]= 7*(j+1);
            printf("7*%d=%d\n",(j+1),arr[1][j]);
        }
        printf("*******************************************************\n");

        printf("table of 9:-\n");
        
        for (j = 0; j < 10; j++)
        {
             arr[2][j]= 9*(j+1);
            printf("9*%d=%d\n",(j+1),arr[2][j]);
        }
        
        
return 0;
}