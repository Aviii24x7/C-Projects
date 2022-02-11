#include<stdio.h>
int force(float m);
int main()
{
    float m;
    printf("enter the value of mass of the object\n");
    scanf("%f", &m);
    printf("%d is the force exerted by the gravity of earth on %d mass",force(m));


return 0;
}
int force(float m)
{
    int force;
    force= 9.8*m;
    return force;
}