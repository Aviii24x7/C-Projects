#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]= "avi chauhan";
    char str2[30];

    strcpy(str2, str1);

    printf(" the str2 is %s", str2);
return 0;
}