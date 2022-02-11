#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]= "avinash";
    char str2[30]= "chauhan";

   int cmp = strcmp(str1, str2);

    printf(" the str1 - str2 (subtracting the ASCII value of str2 from str1) comparision is %d", cmp);
return 0;
}