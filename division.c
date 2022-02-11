//division
#include<stdio.h>
int main()
{
    int number_of_chocolate, number_of_children, chocolate_for_each_child;

 printf("how many chocolates do we have?");
    scanf("%d", &number_of_chocolate);
    printf("how many children are there?");
    scanf("%d", &number_of_children);

    chocolate_for_each_child=number_of_chocolate/number_of_children;

    printf("so we have %d chocolate for each child", chocolate_for_each_child);
    return 0;



}
