#include <stdio.h>
#include <stdbool.h>

int main(){

    int x; // declaration
    float y, z;  // declaration

    x = 10; // asssigning a value
    printf("\n the value of x is %d \n", x);

    x = 25;
    printf("\n the value of x is %d \n", x);

    x = 65.65; // implicit conversion
    printf("\n the value of x is %d \n", x);

    y = 3.56;
    printf("float value is %f\n", y);

    double d = 536;
    printf("double value is %lf\n", d);

    d = 25.2204522;
    printf("double value is %lf\n", d);

    // int d;

    char myChar = 'A';
    printf("my character is %c \n", myChar);

    myChar = 80;
    printf("my character is %c \n", myChar);

    int b = 'a';
    printf("integer is  is %d \n", b);

    // char name[50];
    // name = "ADITYA";

    char name[50] = "ADITYA";
    printf("my name is %s \n", name);

    _Bool b1 = 0;
    printf("boolean value is %d \n", b1);

    b1 = 1;
    printf("boolean value is %d \n", b1);

    b1 = 56;
    printf("boolean value is %d \n", b1);

    b1 = -561;
    printf("boolean value is %d \n", b1);

    b1 = 'c';
    printf("boolean value of character is %d \n", b1);

    _Bool b2 = true;
    printf("boolean value of true is %d \n", b2);

    b2 = false;
    printf("boolean value of false is %d\n", b2);
    
    return 0;
}


