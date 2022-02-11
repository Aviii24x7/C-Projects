#include<stdio.h>
int main()
{
    FILE *ptr;
    int num1, num2;
    ptr = fopen("avi.txt", "r");
   // fprintf(ptr, "avinash chauhan");
    fscanf(ptr, "%d %d", &num1, &num2);
fclose(ptr);
    printf("the no.s in file is %d %d", num1, num2);



return 0;
}