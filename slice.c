#include<stdio.h>
int slice(char *str, int m, int n)
{
    int i=0;
    while((m+i-1)<=(n-1)){
        str[i]= str[m+i-1];
        i++;
    }
    str[i]='\0';
}
int main()
{
    char st[]= "avinash CHAUHAN";                 //change the word from 'avinash' you want to slice
    slice(st, 3, 10);                      //change the no.s by the no.s you want to slice from and to
    printf("%s", st);
return 0;
} 

//DRY RUN TO UNDERSTAND THE LOGIC