#include<stdio.h>
//int printarr(int *ptr , int size)
int printarr(int ptr[] , int size)
{
    for(int i=0; i<size; i++){

       // printf("the value of %d element is %d\n", i+1, *(ptr+i));
        printf("the value of %d element is %d\n", i+1, ptr[i]);
    }
}
int main()
{
    int arr[]={23,6,67,35,65,7,23};
    printarr(arr,7);

return 0;
}