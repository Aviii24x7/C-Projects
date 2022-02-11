#include<stdio.h>
#include<string.h>
int main()
{
    char name1[12], name2[12];
    int salary1, salary2;
    FILE *ptr;
    ptr = fopen("filesalary.txt", "w");

    printf("enter the name of first employee:");
    gets(name1);
    printf("\nenter the salary of %c:",name1);
    scanf("%d", &salary1);
    printf("\nenter the name of 2nd employee:");
    gets(name2);
    printf("\nenter the salary of %c:", salary2);
    scanf("%d", &salary2);

    fprintf( ptr, "%s - %d", name1, salary1);
    fprintf( ptr, "%s - %d", name2, salary2);
}