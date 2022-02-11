#include<stdio.h>
int main()
{
    int i=7, *j;
    *j=&i;
    printf("the adderess of i is %u", *j);
    printf("the adderess of j is %u", &j);        //q, w, 7, 7
    printf("the value of i is %d", i);
    printf("the value of i is %d", **j);
return 0;
}