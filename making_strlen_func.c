#include<stdio.h>
int strlength(char *str);
int main()
{
    char stringg[50];
    char *str=stringg;
    printf("\n\nenter the word/sentence you want to find the no. of alphabet incling spaces:: ");
    gets(stringg);
    strlength(str);


return 0;
}
int strlength(char *str)
{
int counter=0;
while (*str != '\0')
{
    counter++;
    str++;
    
}
printf("\nthe no. of alphabets are %d\n", counter);

}