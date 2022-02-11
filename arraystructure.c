#include<stdio.h>
struct kanyadaan
{
   char name[20];
   int money;
   float time;
};

int main()
{
        struct kanyadaan rishedaar[100];

        struct kanyadaan rishtedaar[0]={"raju rastogi", 501, 12.13};
        struct kanyadaan rishtedaar[1]={"chatur", 21, 12.14};
        struct kanyadaan rishtedaar[2]={"abba nahi maanenge", 101, 13.13};
        struct kanyadaan rishtedaar[3]={"funsuk wangdu", 5001, 14.63};
        struct kanyadaan rishtedaar[4]={"ranchod das", 105, 15.16};

        printf("the kanyadaan by funsuk wangdu is %d", rishtedaar[3].money);

return 0;
}