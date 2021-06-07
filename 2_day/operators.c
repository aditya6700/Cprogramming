/* operators in c */

#include <stdio.h>

int main(){

    int a, b, c;
    printf("\n enter a and b values ");
    scanf("%d %d", &a, &b);

    printf("\n---------------------");
    printf("\n arthemetic operators");
    printf("\n---------------------");

    c = a + b;
    printf("\n sum of %d and %d is %d\n", a, b, c);
    
    c = a - b;
    printf("\n subraction of %d and %d is %d\n", a, b, c);
    
    c = a * b;
    printf("\n multiplication of %d and %d is %d\n", a, b, c);
    
    c = a / b;
    printf("\n quotient of %d and %d is %d\n", a, b, c);
    
    c = a % b;
    printf("\n reminder of %d and %d is %d\n", a, b, c);

    printf("\n---------------------");
    printf("\n relational operators");
    printf("\n---------------------");

    c = a > b;
    printf("\n %d is greater than %d = %d\n", a, b, c);
    
    c = a < b;
    printf("\n %d is less than %d = %d\n", a, b, c);
    
    c = a >= b;
    printf("\n %d is greater than or equal to %d = %d\n", a, b, c);
    
    c = a <= b;
    printf("\n %d is less than or equal to %d = %d\n", a, b, c);
    
    c = a == b;
    printf("\n %d is equal to %d = %d\n", a, b, c);
    
    c = a != b;
    printf("\n %d is not equal to %d = %d\n", a, b, c);

    printf("\n---------------------");
    printf("\n sizeof  operator");
    printf("\n---------------------");

    long int s = 5;
    double d = 56.5;
    char cha = 'A';
    printf("\n size of a is %d bytes", sizeof(s));
    printf("\n size of d is %d bytes", sizeof(d));
    printf("\n size of cha is %d bytes\n", sizeof(cha));

    printf("\n---------------------");
    printf("\n unary operators");
    printf("\n---------------------");

    a++;
    b--;

    printf("\n a value after incremtnting is %d", a);
    printf("\n b value after decrementing is %d", b);

    return 0;
}