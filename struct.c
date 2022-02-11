#include<stdio.h>
#include<string.h>
    struct student{    
        int rollno;
        char name[25]; 
        float percentage;
    };
int main(){


struct student avi={202073, "avi", 33.33};



printf("the name of the student 1 is %s\n", avi.name);
printf("the roll no. of the student 1 is %d\n", avi.rollno);
printf("the percentage of the student 1 is %f\n", avi.percentage); 


return 0;
}