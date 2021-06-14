/********************************************
 * If cost price and selling price of an item are input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit he
made or loss he incurred.
************************************************/


#include <stdio.h>

int main(){

    float cp,sp;
    double profit=0, loss=0;

    printf("\n enter cost price and selling price: ");
    scanf("%f%f", &cp, &sp);

    profit = sp - cp;
    loss = cp - sp;

    if(profit > 0){
        printf("\n you have earned %lf percent profit\n", profit);
    }
    else if(loss > 0){
        printf("\n you have incurred %lf percent loss\n", loss);
    }
    else if(profit == loss){
        printf("\n you have no profit no loss\n");
    }

    return 0;
}