#include<stdio.h>
int main()
{
int num;
    FILE *ptr;
    ptr= fopen("table.txt", "w");
    printf("enter the no. you want to write the table of:");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {  
         fprintf(ptr, "%d * %d = %d\n", num, i, (num*i));
    }
  
return 0;
}