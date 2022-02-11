#include<stdio.h>
int main()
{
        char str[20];
   
    
    printf("enter your name:\n");

    gets(str);

    printf("so, your name is %s\n\n\nnow below is the result for puts\n\n", str);

    puts(str);

return 0;
}