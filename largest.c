//which is largest among three no.s
#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("enter three numbers=");
    scanf("%d \n  %d \n %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
        printf(" %d is largest among all", num1);
    else if (num2 > num1 && num2 > num3)
        printf(" %d is largest among three", num2);
    else
        printf(" %d is largest number among these three", num3);
    return 0;
}
