#include<stdio.h>
void reverse(int ptr[], int n){

    int temp;
    for(int i=0; i<(n/2); i++){

      temp=ptr[i];
      ptr[i]=ptr[n-i-1];
      ptr[n-i-1]=temp;
    }
}
int main()
{
  int arr[10]={1,2,3,4,5,6,7,8,9,0};                  //put any array here you want to reverse
      reverse(arr,10);                                //change 10 by the size of the array

   printf("\nprinting the reverse array:-\n");
  for (int i = 0; i < 10; i++)                        //change 10 by the size of the array
  {
   printf("\nthe %d element is:%d\n", i+1, arr[i]);
  }
return 0;
}
//FOLLOWED INSTRUCTIONS? YES? OK. now you can run this code baybee.