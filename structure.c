#include<stdio.h>
#include<string.h>
    struct student{    
        int rollno;
        char name[25]; 
        float percentage;
    };
int main(){


struct student s1;
s1.rollno= 73;
strcpy(s1.name, "avi");
s1.percentage= 92.56;

struct student s2;
s1.rollno= 54;
strcpy(s2.name, "moda");
s1.percentage= 93.16;
struct student s3;
s1.rollno= 27;
strcpy(s3.name, "nikki");
s1.percentage= 94.54;

printf("the name of the student 1 is %s\n", s1.name);
printf("the roll no. of the student 1 is %d\n", s1.rollno);
printf("the percentage of the student 1 is %f\n", s1.percentage); 


printf("the name of the student 3 is %s\n", s3.name);
return 0;
}