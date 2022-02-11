#include<stdio.h>
typedef struct date
{
    int day, month, year;
}taareekh;

void display(taareekh d){

        printf("the date is %d/%d/%d\n", d.day,d.month,d.year);
}

void datecmp(taareekh d1,taareekh d2)
{
        if(d1.year>d2.year)
            {
                printf("1");
            }

        else
        {
         
        if (d1.year<d2.year)
            {
                printf("-1");
            }
        
        else
        {
            if(d1.month>d2.month)
            {
                printf("1");
            }

        else
        {
         
        if (d1.month<d2.month)
            {
                printf("-1");
            }
        
        else
        {
            if(d1.day>d2.day)
            {
                printf("1");
            }

        else
        {
         
        if (d1.day<d2.day)
            {
                printf("-1");
            }
        else
        {
            printf("0");
        }
        }    
        }
        }
        }
        }
        
        
}

int main()
{
    taareekh d1={22,01,2022};
    taareekh d2={22,01,2022};
    display(d1);
    display(d2);

    printf("\n\nthe date comparision returns:");
    datecmp(d1,d2);
    printf("\n\n\n\n********************************************meaning of comparsions********************************************\n\n\t\t\t\t\t=> 1= date 1 is greater than date 2.\n\t\t\t\t\t=> -1= date 1 is lesser that date 2.\n\t\t\t\t\t=> 0= dates sare equal.");
return 0;
}