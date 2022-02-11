//N!
#include<stdio.h>
int main()
{
    int num, factorial=1, counter=0;
    printf("write the number you want ro find factorial of.");
    scanf("\n%d",&num);

    //WHILE LOOP

   /*
    while(num>=1){

factorial *= num;
num--;
    }

    */

    //FOR LOOP

  /*  for(factorial=1; num>=1; num--)
       factorial *= num;

     printf("factorial of the no. is %d", factorial); */

     do {
     factorial *= num;
     num--;
     counter++;


     }
     while (num >=1);

 printf("factorial of %d = %d",counter, factorial);

    return 0;
}
