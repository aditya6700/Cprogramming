/*******************************
 * If a four-digit number is input through the keyboard, write a
program to reverse the number.
************************************/


#include <stdio.h>

int main(){

    int num, rev = 0, r;

    printf("\n enter a four digit number: ");
    scanf("%d", &num);

    r = num % 10;
    num = num / 10;
    rev = rev + r * 1000;

    r = num % 10;
    num = num / 10;
    rev = rev + r * 100;

    r = num % 10;
    num = num / 10;
    rev = rev + r * 10;

    r = num % 10;
    num = num / 10;
    rev = rev + r * 1;

    printf("\n reverse of given number is %d\n", rev);

    return 0;
}