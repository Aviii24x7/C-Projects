//find the routes of the quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
    float x1, x2, a, b, c, d;
    printf("If we have ax^2 + bx + c = 0 and we have to find the value x.\n\n Enter the value of a= ");
    scanf("%f", &a);
    printf("\n enter the value of b=");
    scanf("%f", &b);
    printf("\n enter the value of constant c=");
    scanf("%f", &c);

    d = ((b * b) - (4 * a * c));



    if(d == 0){
        printf("roots are real and equal.");

       x1 = x2 = - b / (2 * a);

        printf("roots are %f and %f.",x1, x2);
    }
    else if(d > 0){
        printf("roots are real.");

        x1 =  ((-b + sqrt(d)) / (2 * a));
        x2 =  ((-b - sqrt(d)) / (2 * a));

        printf(" roots are %f and %f.",x1, x2);
    }
    else{
        printf("roots are imaginary.");
    }
    return 0;

}
