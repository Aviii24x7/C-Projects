  //tax on salary
  #include<stdio.h>
  int main()
  {

      int workinghours, tax, payrate, overtime, workingsalary, totalsalary;

      printf("how long worker work in a week?\n");
      scanf("%d", &workinghours);
      printf(" with what payrate?\n");
      scanf("%d", &payrate);
      printf("what is the tax on the salary?\n");
      scanf("%d", &tax);

      workingsalary = ((workinghours * payrate) - ((workinghours * payrate) * tax * 1/100));
      totalsalary = ((40 * payrate) + (workinghours - 40) * 1.5 * payrate ) - (((40 * payrate) + (workinghours - 40) * 1.5 * payrate ) * tax * 1/100 );

      if (workinghours <= 40 )
        printf("total salary is %d", workingsalary);
      else
        printf("total salary is %d", totalsalary);

      return 0;
  }
