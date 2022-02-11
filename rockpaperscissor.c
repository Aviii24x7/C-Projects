//game 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game(char comp, char you){

    if(comp==you){
        return 0;
    }
    if(comp=='r' && you=='p'){
        return 1;}

    else if(comp=='p' && you=='r'){
        return -1;
    }
       if(comp=='r' && you=='s'){
        return -1;}

    else if(comp=='s' && you=='r'){
        return 11;
    }
       if(comp=='s' && you=='p'){
        return -1;}

    else if(comp=='p' && you=='s'){
        return 1;
    }
}
int main()
{
    char comp, you;

    int number;
    srand(time(0));
    number= rand()%100;

    if(number<33){
        comp= 'r';
    }
    else if(number>33 && number<66){
        comp= 'p';
    }
    else{
        comp= 's';
    }

    printf(".\n\t\t\t**ROCK**--**PAPER**--**SCISSOR**\n\nchose 'r' for rock __ 'p' for paper __ 's' for scissor:\n");
    scanf("%c", &you);
 
    // '1' for win *** '-1' for lose *** '0' for draw");

    int result= game(comp,you);

    if(result==1){
        printf("\nCONGRATS!! YOU Win");
    }
    else if(result==-1){
        printf("\nYOU lose!! try again...");
    }
    else{
        printf("\nthe game is draw!!");
    }
return 0;
}