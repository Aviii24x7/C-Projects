//identity matrix
#include<stdio.h>
int main()
{
    int i,j, size;
    printf("enter the size of the identity matrix");
    scanf("%d",&size);

    printf("identity matrix of %d size is:\n",size);

    for(i=1; i<=size; i++){
        for(j=1; j<=size; j++)

        if(i==j){
            printf("1");}
        else{
            printf("0");}
printf("\n");
    }

    return 0;
}
