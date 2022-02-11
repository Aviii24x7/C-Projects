#include<stdio.h>

    struct complex{
        int real;
        int img;
    };

void display(struct complex c)
{    
    
        printf("the complex no. are %d+ %di\n", c.real, c.img);

        
          
    
};

int main()
{
   struct complex com[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nenter the real part of complex no.:");
        scanf("%d",&com[i].real);
    
        printf("enter the imgaginary part of complex no.:");
        scanf("%d",&com[i].img);
    }
    for (int i = 0; i < 5; i++)
    {
        display(com[i]);
    }
    
return 0;
}