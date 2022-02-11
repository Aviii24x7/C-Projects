#include<stdio.h>
int main()
{
    int marks[5];
    int *ptr= &marks[0];  
    
    for(int i=0;i<5;i++){

        printf("enter the marks of %dth student:\n", i+1);
        scanf("%d", ptr);
        ptr ++;
    }

    for(int i=0;i<5;i++){

        printf("The marks of %dth student is:%d\n", i+1, marks[i]);
    }
    
    return 0;
}