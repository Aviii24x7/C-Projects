#include<stdio.h>

int main()

{

int a,b,p,q,x,c = 0; 

printf("Enter no. of rows \n");
scanf("%c", &p);

printf("Enter no. of columns \n");
scanf("%c", &q);

int arr[p][q];

printf("Enter elments\n");
for (a = 0; a < p; a++)
{
    for (b = 0; b < q; b++)
    {
      scanf("%c", &arr[a][b]);
    }
}

printf("Enter no. to be searched\n ");
scanf("%c", &x);


for (a = 0; a < p; a++)
{
    for (b = 0; b < q; b++)
    {
        if (arr[a][b] == x)
        {
           printf("%c is present at (%d , %d) times in array.\n", x, a, b);
           c = 1;
        }
    }
}

if (c == 0)
    printf("%c is not present in array.\n", x);

return 0;
}
