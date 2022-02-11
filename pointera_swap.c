#include<stdio.h>
void swap(int *a , int *b);

int main()
{
    int x,y;
    printf("enter the 1st no.:\n");
    scanf("%d", &x);
    printf("enter the 2nd no.:\n");
    scanf("%d", &y);
    printf("the values of x and y BEFORE swapping is %d and %d.\n", x, y);
    swap(&x,&y);
    printf("the values of x and y AFTER swapping is %d and %d.\n", x, y);

return 0;
}

void swap(int *a , int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

return 0;


}