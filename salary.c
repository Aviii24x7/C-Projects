 //salary
 #include<stdio.h>
 int main()
 {

     int totalsalary, mainsalary, payrate, workinghours;

     printf("how many hours you work?\n");
     scanf("%d", &workinghours);
     printf("with what payrate?\n");
     scanf("%d", &payrate);

     mainsalary = workinghours * payrate;
     totalsalary = (40 * payrate) +((workinghours - 40) * 1.5 * payrate);

     if (workinghours <=40 )
        printf("total salary is %d", mainsalary);
     else
        printf("total salary is %d", totalsalary);

    return 0;
 }
