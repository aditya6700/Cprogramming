/*******************************
if
if-else
nested if
nested if else
else if (ladder if)
***************************/

#include <stdio.h>

int main(){

    int age;

    // printf("\n enter you age: ");
    // scanf("%d", &age);

    // if (age >= 18)
    //     printf("\n you are eligible for driving license");


    // if (age >= 18){ 
    //     printf("\n you are eligible for driving license");
    //     printf("\n you can apply anytime");
    // }
    // else{
    //     printf("\n you are not eligible");
    //     printf("\n wait untill 18");
    // }



    // nested if else
    // int num;

    // printf("\n enter any number: ");
    // scanf("%d", &num);

    // if(num >= 10)
    // {
    //     if(num >=100)
    //     {
    //         printf("\n your number consists of 3 or more than three digits");
    //     }
    //     else
    //     {
    //         printf("\n your number consists of two digits");
    //     }
    // }
    // else
    // {
    //     printf("\n one digit number");
    // }

    // // problem 1
    // int a = 500, b=0, c ;

    // if ( a == 400 )
    //     b = 300 ;
    // c = 200 ;
    // printf ( "%d %d\n", b, c ) ;





    // // problem 2
    // int j = 10, k = 22;

    // if(k >= j)
    // {
    //     {
    //         k = j;
    //         j = k;
    //         {
    //             printf("\n codition works");
    //         }
    //     }
    // }

    // else if
    // problem 3 find the biggest number
    int a = 5, b = 6;
    int diff = a - b;

    // if(a==b){
    //     printf("\n both are equal");
    // }else{
    //     if(a>b){
    //         printf("\n a is greater than b");
    //     }else{
    //         if(a<b){
    //             printf("\n b is greater than a");
    //         }
    //     }
    // }

    // or 

    
    if(a==b){
        printf("\n both are equal");
    }
    else if(a>b){
        printf("\n a is greater than b");
    }
    else if(a<b){
        printf("\n b is greater than a");
    }
        
    

    printf("\n");
    return 0;
}