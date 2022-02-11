#include<stdio.h>
int main()
{
    // char *str ="avinash chauhan";
    // printf("\nthe string is %s\n", str);
    char str[]= {'a','v','i','\0'};
   char *ptr= str;
    while(ptr!= '\0')
    {
    printf("%c",ptr);
    ptr++;
    }
return 0;
}