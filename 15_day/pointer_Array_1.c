/* Demonstration of call by reference with arrays */
/** Demonstration of call by value with arrays **/
# include <stdio.h>
void dispVal(int);
void dispRef(int *);

int main()
{
    int i ;
    int marks[] = { 55, 65, 75, 56, 78, 78, 90 } ;

    printf("\n Accesing using call by value: ");
    for ( i = 0 ; i <= 6 ; i++ ){
        dispVal(marks[i]);
    }
    printf("\n\n Accesing using call by Reference: ");
    for ( i = 0 ; i <= 6 ; i++ ){
        dispRef( &marks[i] );
    }

    printf("\n");
    return 0 ;
}

void dispVal( int m )
{
    printf("%d ", m);
}

void dispRef( int *n )
{
    printf("%d ",* n );
}

// /* complete the show() function */
// # include <stdio.h>
// void disp(int *);

// int main( )
// {
//     int i ;
//     int marks[] = {55, 65, 75, 56, 78, 78, 90};
//     for ( i = 0 ; i <= 6 ; i++ )
//         disp(&marks[i]);
//     return 0;
// }

// void disp ( int *n )
// {
//     show(&n);
// }
