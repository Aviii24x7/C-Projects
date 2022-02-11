//checking if the year us==is leap year
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year=", year);
    scanf("%d",&year);

    if (year % 400 == 0)
    printf("year is a leap year");

    else
        if (year % 100 == 0)

        printf("year is NOT A leap year");

    else
        if (year % 4 == 0)

        printf("year is leap year");

    else
        printf("year is NOT a leap year");

    return 0;

}
