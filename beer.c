#include<stdio.h>
int main()
{
    int yaar, beer, left;
    printf("guys how many beer do we have?\n");
    scanf("%d", &beer);
    printf("or yaar jigri kitne hai\n");
    scanf("%d", &yaar);
    if (yaar == beer)
        printf("\nwe have one beer for everyone bro ");
    else if (beer > yaar){
        left = beer - yaar;
    printf("\nwe have %d beers more dude", left);}
    else{
        left = yaar - beer;
    printf("\nwe have to buy %d beers more to get everyone a beer.\n BUT PARTY IS ON", left);}
    return 0;

}
