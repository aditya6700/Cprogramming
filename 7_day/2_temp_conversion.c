/*************************
 * Temperature of a city in Fahrenheit degrees is input through the
keyboard. Write a program to convert this temperature into
Centigrade degrees.*
**************************************/


#include <stdio.h>

int main(){

    double faren, celci;

    printf("\n Enter the temparature of a city in Fahrenheit: ");
    scanf("%lf", &faren);

    // conversion
    celci = (5.0 / 9.0) * (faren - 32);

    printf("\n %lf Fahrenheit in degree Celcius is %lf\n", faren, celci);

    return 0;
}