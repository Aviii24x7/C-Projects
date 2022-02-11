#include<stdio.h>
#include<string.h>
int main()
{
    //input using %s
    char str1[25];
    char str2[25];
    int i=0;
    char c;
    printf("enter the first text:");
    gets(str1);


printf("enter the string character by character:");


//taking input using c
while(c!='\n')
{
    fflush(stdin);
    scanf("%c",&c);
    str2[i]=c;
    i++;
}
str2[i-1]='\0';
    printf("the first text is: %s", str1);
    printf("\nthe 2nd text is:");
    puts(str2);

    printf("the strcmp for str1 and str2 is %d",strcmp(str1,str2));

    printf("\n\n\t\t\t\t\t%d", strcmp);
    

return 0;
}