#include<stdio.h>
int main()
{
    FILE *ptr;
    
    ptr= fopen("avi.txt", "w");
    
   fputc('c', ptr);
   fputc('h', ptr);
   fputc('a', ptr);
   fputc('u', ptr);
   fputc('h', ptr);
   fputc('a', ptr);
   fputc('n', ptr);
    
    fclose(ptr);
return 0;
}