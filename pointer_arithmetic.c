#include<stdio.h>
int main()
{
    int i=4;
    int *ptr = &i;
    int *j;

    
    printf("the value of ptr is %u \n", ptr); 
    printf("the value of ptr is %d \n", *ptr); 
    
       j = ptr+4;
 
//printf("the value of j is %u \n", j);
//printf("the value of j is %d \n", *j);

printf("the value of j-ptr is %u", j - ptr);
//printf("the value of ptr is %d \n", *j- *ptr);
 
   //ans is in the form of bytes
   return 0;
   
}