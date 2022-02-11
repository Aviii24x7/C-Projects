#include<stdio.h>
int count(char str[], char c){ 
    int counter=0;
    char *ptr=str;
        while (*ptr !='\0')
            {
                if(*ptr == c)
                {
                    counter++;
                }
                ptr++;
                }
                return counter;
                
}
int main()
{
    char st[25]="avinash chauhan";            //change the strinf to which you want

    int occurence = count(st,'a');            // replace the charcater 'a' with the charcter you want to find the occurance of

    printf("occurence of the character is %d", occurence);
return 0;
}