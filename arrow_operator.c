#include<stdio.h>
#include<string.h>
struct exam{
    int marks;
    char name[25];
    };

int main()
{
    struct exam kid1;
    struct exam *ptr1;
    ptr1= &kid1;

    ptr1->marks= 23;
    strcpy(ptr1->name, "avinash");

    printf("the name of student is %s and his marks are %d", ptr1->name, ptr1->marks);    

  
return 0;
}