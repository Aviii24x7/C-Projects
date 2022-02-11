#include<stdio.h>
float average(int a, int b,int c);
int main()
{
    int A, B, C;
    printf("enter the 1st no.");
    scanf("%d", &A);
    printf("enter the 2nd no.");
    scanf("%d", &B);
    printf("enter the 3rd no.");
    scanf("%d", &C);
    
    printf("the average of these three no.s is %f", average(A,B,C));
    
    return 0;
}

float average(int a, int b,int c)
{
    float answer;
    answer= (float)(a+b+c)/3;
    return answer;
}
