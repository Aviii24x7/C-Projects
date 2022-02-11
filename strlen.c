#include<stdio.h>
#include<string.h>
int main()
{
    char *str1= "avi chauhan";
    //this is used to tell the length of the string excluding null character
    int a= strlen(str1);
    printf("the no. of alphabet in the given string is %d", a);
return 0;
}