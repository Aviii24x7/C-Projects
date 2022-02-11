#include<stdio.h>
#include<string.h>
typedef struct acccount
{
    int accno;
    float balance;
    char *IFSC;

}acc;

int main()
{
    acc avi;
    avi.accno=823120024;
    avi.balance= 150.32;
    strcpy(avi.IFSC, "CNRB8231BITCH");

    printf("the account detail of avi is:\n\n account no.= \t%d \nIFSC code=\t %s\n\namount= Rs. %d", avi.accno, avi.IFSC, avi.balance);
    
return 0;
}