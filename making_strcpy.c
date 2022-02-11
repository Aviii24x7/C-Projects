#include<stdio.h>
void strcopy(char *str1, char *str2)
{
    int i=0;

    while (str2 !='\0')
    {
        str1[i] = str2[i];
        i++;
    }
    

}
int main()
{
    char string1[25];
    char string2[]="chauhan";
printf("before copying:\n\n");

printf("the string 1 is:");
    puts(string1);

    printf("\nthe string 2 is:");
    puts(string2);

    strcopy(string1,string2);

printf("\nafter copying:\n\n");

    printf("the string 1 is:");
    puts(string1);

    printf("\nthe string 2 is:");
    puts(string2);

return 0;
}