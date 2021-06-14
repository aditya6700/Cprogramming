/*********************************************************
 *  * Write a program, which will require the user to give values of
 * hardness, carbon content and tensile strength of the steel under
 * consideration and output the grade of the steel.
 * 
 * A certain grade of steel is graded according to the following conditions:
 * (i) Hardness must be greater than 50
 * (ii) Carbon content must be less than 0.7
 * (iii) Tensile strength must be greater than 5600
 * 
 * The grades are as follows:
 *   Grade is 10 if all three conditions are met
 *   Grade is 9 if conditions (i) and (ii) are met
 *   Grade is 8 if conditions (ii) and (iii) are met
 *   Grade is 7 if conditions (i) and (iii) are met
 *   Grade is 6 if only one condition is met
 *   Grade is 5 if none of the conditions are met
*****************************************************/

#include <stdio.h>

int main(){

    double hard, carbon, strength;

    printf("\n Enter the hardness of the steel: ");
    scanf("%lf", &hard);

    printf("\n Enter the amount of carbon in the steel: ");
    scanf("%lf", &carbon);

    printf("\n Enter the tensile strength of the steel: ");
    scanf("%lf", &strength);

    if (hard > 50 && carbon < 0.7 && strength > 5600){
        printf("\n Grade 10");
    }
    else if(hard > 50 && carbon < 0.7 && strength <= 5600){
        printf("\n Grade 9");
    }
    else if(hard <= 50 && carbon < 0.7 && strength > 5600){
        printf("\n Grade 8");
    }
    else if(hard > 50 && carbon >= 0.7 && strength > 5600){
        printf("\n Grade 7");
    }
    else if(hard > 50 || carbon < 0.7 || strength > 5600){
        printf("\n Grade 6");
    }
    else{
        printf("\n Grade 5");
    }
    

    printf("\n");
    return 0;
}