#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int i = 3;
    int *j;
    
    j = &i;

    printf ("\nAddress of i = %u\n", &i );
    printf ("Address of i = %u\n", j );
    printf ("Address of j = %u\n", &j );
    printf ("Value of j = %u\n", j );
    printf ("Value of i = %d\n", i );
    printf ("Value of i = %d\n", *( &i ) );
    printf ("Value of i = %d\n", *j );


    //  '*' is pointer symbol (indirection operator) (value at address)

    return 0;
}
