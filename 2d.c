#include<stdio.h>

int main()

{

int a,b,p,q,x,c = 0; 

printf("Enter no. of rows \n");
scanf("%d", &p);

printf("Enter no. of columns \n");
scanf("%d", &q);

int arr[p][q];

printf("Enter elments\n");
for (a = 0; a < p; a++)
{
    for (b = 0; b < q; b++)
    {
      scanf("%d", &arr[a][b]);
    }
}

printf("Enter no. to be searched\n ");
scanf("%d", &x);


for (a = 0; a < p; a++)
{
    for (b = 0; b < q; b++)
    {
        if (arr[a][b] == x)
        {
           printf("%d is present at (%d , %d) times in array.\n", x, a, b);
           c = 1;
        }
    }
}

if (c == 0)
    printf("%d is not present in array.\n", x);

return 0;
}
