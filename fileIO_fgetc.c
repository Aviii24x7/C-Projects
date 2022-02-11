#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("avi.txt", "r");
char c;

c= fgetc(fptr);

do
{
    printf("%c", c);
    c= fgetc(fptr);
} while (c!=EOF);



return 0;
}