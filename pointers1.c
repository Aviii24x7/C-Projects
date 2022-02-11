#include<stdio.h>
int main()
{
    int i=24, *j=&i;
    
    printf("\nthe value of i is %d\n", i);
    printf("the address of i is %u\n", &i);
    printf("\nthe address of i is %u\n", j);
    printf("the value of j is %u\n", &j);
    printf("\nthe value of i is %d\n", *j);

    

return 0;
}