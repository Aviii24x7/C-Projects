#include<stdio.h>
struct vector
{
    int x;
    int y;
};

struct vector vectorsum(struct vector v1, struct vector v2){
    struct vector result;
    result.x= v1.x + v2.x;
    result.y= v1.y + v2.y; 
    return result;
 
}
int main()
{

   struct vector v1, v2, sum;
   v1.x=23;
   v2.x=45;
   v1.y=13;
   v2.y=33;

sum = vectorsum(v1,v2);

printf("the new vector v1+v2 is %dx + %dy ", sum.x , sum.y);
return 0;
}