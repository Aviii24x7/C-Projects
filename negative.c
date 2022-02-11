//checking if the value is less than 0
#include<stdio.h>
int main()
{
    int value1;
    printf("enter a integer=");
    scanf("%d", &value1);
    if (value1 < 0)
    printf("the number is negative");
    else
        printf("entered number is positive");
    return 0;
}
