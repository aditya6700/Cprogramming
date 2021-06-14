/**************************
 The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance in
meters, feet, inches and centimeters.
*************************/


#include <stdio.h>

int main(){

    float km,m,ft,inch,cm;

    printf("\n Enter the distance between two cities (in km.) ");
    scanf("%f", &km);

    m = km * 1000;
    cm = m * 100;
    inch = cm / 2.54;
    ft = inch / 12;

    printf("\n %fkm in meters is %f", km, m);
    printf("\n %fkm in centimeters is %f", km, cm);
    printf("\n %fkm in inches is %f", km, inch);
    printf("\n %fkm in feet is %f\n", km, ft);

    return 0;
}

