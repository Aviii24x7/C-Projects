#include<stdio.h>
int main()
{
    int arr[4][5]; //marks of 5 subjects in 4 classes 
    
for(int i=9;i<13;i++)
{
    for(int j=0;j<5;j++){
        printf("enter the marks of the student %d of class %d:\n",j+1, i );
    scanf("%d", &arr[i][j] );

}}

for(int i=9;i<13;i++)
{
     printf("the marks of students in class  %d:\n", i);

    for(int j=0;j<5;j++){
       
        printf("student %d: %d\n",j+1, arr[i][j] );
    }}
return 0;
}