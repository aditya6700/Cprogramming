/**********************************************
 * GREATEST OF THREE NUMBERS
 * 
 * If the ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the oldest of the three.

*******************************************************/

#include <stdio.h>

int main(){

    int a, b, c;
    int great;

    printf("\n enter three ages: ");
    scanf("%d%d%d", &a, &b, &c);

    if ((a > b) && (a > c))
        great = a;
    else if ((b > a) && (b > c))
        great = b;
    else if ((c > a) && (c > b))
        great = c;

    printf("\n the oldest age is %d\n", great);

    return 0;
}