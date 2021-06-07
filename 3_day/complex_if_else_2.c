/* Insurance of driver - without using logical operators */
# include <stdio.h>

int main(){
    char gen, ms;
    int age;

    printf ( "\nEnter age, gen, marital status " ) ;
    scanf ( "%d %c %c", &age, &gen, &ms ) ;

    // if ( ms == 'M' )
    //     printf ( "Driver should be insured\n" ) ;
    // else{

    //     if ( gen == 'M' ){
    //         if ( age > 30 )
    //             printf ( "Driver should be insured\n" ) ;
    //         else
    //             printf ( "Driver should not be insured\n" ) ;
    //     }
        
    //     if ( gen == 'F' ){
    //         if ( age > 25 )
    //             printf ( "Driver should be insured\n" ) ;
    //         else
    //             printf ( "Driver should not be insured\n" ) ;
    //     }
        
    // }

    // USING LOGICAL OPERATORS

    if(
        ( ms == 'M' ) || 
        (( ms == 'U') && ( gen == 'M') && ( age > 30)) ||
        (( ms == 'U') && ( gen == 'F') && ( age > 25))
    ){
        printf("\n Driver should be insured ");
    }
    else{
        printf ( "Driver should not be insured\n" );
    }

    printf("\n");
    return 0 ;
}