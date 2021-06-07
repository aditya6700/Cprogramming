/* constants and addresses */
#include <stdio.h>

#define pi 3.14

int main(){

    const int a = 7; // declaring a value
    printf("\na value is %d\n", a);

    // a=20; 
    printf("\na value is %lf \n", pi);


    // & -- used to find the address of any variable
    printf("pi is stored at location %ld", &a);

    return 0;
}