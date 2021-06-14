/*****************************************************
 * If the three sides of a triangle are entered through the keyboard,
 * write a program to check whether the triangle is valid or not. 
 * 
 * The triangle is valid if the sum of two sides is greater than the largest of
 * the three sides.
 * 
 * STEPS:
 *  1. find the greatest side
 *  2. find sum of the smallest sides
 *  3. check the condition
*************************************************************/

#include <stdio.h>

int main(){

    int a, b, c, big, small;

    printf("\n Enter three sides of a triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if((a > b) && (a > c))
    {   
        big = a;
        small = b + c;
    }
    else if((b > a) && (b > c))
    {  
        big = b;
        small = a + c;
    }
    else if((c > a) && (c > b))
    { 
        big = c;
        small = b + a;
    }

    if ( big < small)
        printf("\n Valid Triangle");
    else   
        printf("\n Invalid Triangle");

    printf("\n");
    return 0;
}