#include<stdio.h>

void encrypt(char *c){
    char *ptr=c;
    while (*ptr!= '\0')
    {
        *ptr=*ptr + 1;            //for decrypted value change the '+' sign with "-"
        ptr++;
    }
    
}
int main()
{
    printf("the encrypted string is loading ...\n\n");
    char str[]= "avinash chauhan";
    encrypt(str);
    printf("the encrypted string is %s", str);
return 0;
}