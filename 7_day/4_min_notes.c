/********************************************
 * Consider a currency system in which there are notes of seven
    denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If
    a sum of Rs. N is entered through the keyboard, write a program to
    compute the smallest number of notes that will combine to give Rs.
    N.
************************************************/

#include <stdio.h>

int main(){

    int amt, nohun, nofif, noten, nofiv, notwo, noone, total=0;

    printf("\n Enter the amount: ");
    scanf("%d", &amt);

    nohun = amt / 100;
    amt = amt % 100;

    nofif = amt / 50;
    amt = amt % 50;

    noten = amt / 10;
    amt = amt % 10;

    nofiv = amt / 5;
    amt = amt % 5;

    notwo = amt / 2;
    amt = amt % 2;

    noone = amt / 1;
    amt = amt % 1;

    total = total + nohun + nofif + noten + nofiv + notwo + noone;

    printf("\n Minimum number notes required are %d\n", total);

    return 0;
}