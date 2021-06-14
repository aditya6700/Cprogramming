/*********************************
 * Two numbers are input through the keyboard into two locations C
and D. Write a program to interchange the contents of C and D.
*******************************/

#include <stdio.h>

int main(){

    int c, d, temp;

    printf("\n enter C and D values: ");
    scanf("%d%d", &c, &d);

    temp = c;
    c = d;
    d = temp;

    printf("\n C and D values after swapping are: \n C = %d\n D = %d\n", c, d);

    return 0;

}