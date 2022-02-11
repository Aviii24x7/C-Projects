//number guessing game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num, guess, count=1;

    srand(time(0));
    num=rand()%100+1;

printf("\n\t****************************#WELCOME TO NUMBER GUESSING GAME#*******************************\n");
printf("\t____________________________________________________________________________________________\n\n");
    printf("\nguess the number between 1 to 100\n");
    scanf("%d", &guess);
do{
        count++;

    if(guess>num){
        printf("try choosing a smaller no.\n");
        scanf("%d", &guess);
    }

    else if(guess<num){
        printf("try choosing bigger no.\n");
        scanf("%d", &guess);
         }

}
while(guess!=num);

   if(guess==num){
    printf("\n%d is the correct number.\nCONGRATULATIONS!!!!after %d attempts you chose the right no.\n\n\n" ,num, count);

   }
if(count>10)
{
    printf("try doing better next time.\n\n");
}

     return 0;
}
