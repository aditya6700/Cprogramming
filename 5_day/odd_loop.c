/* Different loops */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int no;
    char myChar;

    // // using do while;
    // do
    // {
    //     printf("\n enter a number: ");
    //     scanf("%d", &no);

    //     if(no % 2 == 0){
    //         printf(" %d is even number\n", no);
    //     }
    //     else{
    //         printf(" %d is odd number\n", no);
    //     }

    //     printf("\n do you want to check another number? ");
    //     fflush(stdin);
    //     scanf("%c", &myChar);

    // } while (myChar == 'y');

    // // using for loop;
    // for ( myChar = 'y'; myChar=='y'; )
    // {
    //     printf("\n enter a number: ");
    //     scanf("%d", &no);

    //     if(no % 2 == 0){
    //         printf(" %d is even number\n", no);
    //     }
    //     else{
    //         printf(" %d is odd number\n", no);
    //     }

    //     printf("\n do you want to check another number? ");
    //     fflush(stdin);
    //     scanf("%c", &myChar);
    // }

    myChar='y';
    while (myChar=='y') 
    {
        /* code */
        printf("\n enter a number: ");
        scanf("%d", &no);

        if(no % 2 == 0){
            printf(" %d is even number\n", no);
        }
        else{
            printf(" %d is odd number\n", no);
        }

        printf("\n do you want to check another number? ");
        fflush(stdin);
        scanf("%c", &myChar);
    }
    
    


    return 0;
}  