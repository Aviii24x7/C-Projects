//call with reference in arr
#include<stdio.h>
int main()
{
    int arr[10]={1,3,5,7,9,11,13,15,17,19};
    int *ptr= &arr[0];

    printf("the first element of the array is %d\n", *ptr);

    ptr=ptr+2;

    printf("the third element of the array is %d", *ptr);

return 0;
}