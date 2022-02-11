//N!
#include<stdio.h>
int main()
{
    int num, factorial=1;
    printf("write the number you want ro find factorial of.");
    scanf("\n%d",&num);

    while(num>=1){

factorial *= num;
num--;
    }
    printf("factorial of the no. is %d", factorial);

    return 0;
}
