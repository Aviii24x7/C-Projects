#include<stdio.h>

int negcount(int array[], int n){
    int count=0;

    for(int i=0;i<n;i++)
    {
       if (array[i]<0)
       {
           count++;
       }}
        printf("\nthe no of negative integers in the given array is %d\n",count);
    }




       int poscount(int posarr[], int n){
    int poscount=0;

    for(int i=0;i<n;i++)
    {
       if (posarr[i]>0)
       {
           poscount++;
       }    
    }
     printf("\nthe no of positive integers in the given array is %d\n",poscount);
    
}


int main()
{
    int arr[]={1,-3,12,4,5,-34,56,-6};
    negcount(arr,8);
    poscount(arr,8);
return 0;
}