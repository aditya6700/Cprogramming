#include<stdio.h>
int main(){

    int i = 10;
    char ch = 'A';

    printf("\n %d", i);
    printf("\n %c", ch);

    i = i + ch; // implicit conversion
    printf("\n %d", i);

    int j = 9;
    float f =  j + 1.2; // implicit conversion
    printf("\n %f", f);

    double k = 7.9;
    printf("\n %lf", k);
    int ls = (int)k + 2;  // explicit conversion
    printf("\n %d", ls);

    float f1 = (float)ls; // explicit conversion
    printf("\n %f", f1);

    printf("\n");
    return 0;
}