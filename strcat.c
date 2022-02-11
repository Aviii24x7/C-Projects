#include<stdio.h>
#include<string.h>
int main()
{
  char  str1[20]= "avi";
  char  str2[20]= "chauhan";

    // strcat(str1,str2);

    // printf("the str1 is %s\n", str1);
    // printf("the str2 is %s", str2);

      strcat(str2,str1);

    printf("the str1 is %s\n", str1);
    printf("the str2 is %s", str2);
return 0;
}