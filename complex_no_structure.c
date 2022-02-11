#include<stdio.h>
int main()
{
    struct complex{
        int real;
        int img;
    };

   struct complex c1;
    
    printf("enter the real part of complex no.:");
    scanf("%d",&c1.real);
    
    printf("\n\nenter the imgaginary part of complex no.:");
    scanf("%d",&c1.img);

    printf("\nthe complex number is '%d +%di', where i is iota", c1.real, c1.img);
return 0;
}