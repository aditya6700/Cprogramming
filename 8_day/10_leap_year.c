/*************************************
 * Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)

HINT:

    divisible by 100 and divisible by 400  -------  leap year
    divisible by 100 and not divisible by 400  -------  not leap year
    
    not divisible by 100 and divisible by 4 ------  leap year
    not divisible by 100 and not divisible by 4 ------  not leap year

    
***********************************************/


#include <stdio.h>

int main(){

    int year;

    printf("\n enter a year: ");
    scanf("%d", &year);

    if(year%100 == 0){
        if(year%400 == 0){
            printf("\n %d year is leap year\n", year);
        }
        else{
            printf("\n %d year is not a leap year\n", year);
        }
    }
    else{
        if(year % 4 == 0){
            printf("\n %d year is leap year\n", year);
        }
        else{
            printf("\n %d year is not a leap year\n", year);
        }
    }

    return 0;
}