/* while condition 
syntax:
        initial condition
        while(test condition){
            // do this;
            updation;
        }
*/

#include <stdio.h>

int main(){
    printf("\n");

    // int i = 0;

    // while(i<10){
    //     printf("\n%d", i);
    //     i++;
    // }

    // calculaiting simple interest
    // Simple Interest (SI) =  (P x R x N)/100
    // int p, n, count;
    // double r, si;

    // count = 0;
    // while(count<3){
    //     printf("\n enter principal amount, rate of interst, time period ");
    //     scanf("%d %lf %d", &p, &r, &n);

    //     si = (p * n * r) / 100;
    //     printf("\n your simple interest = %lf\n\n", si);

    //     count++;
    // }


    // int i = 1;
    // while (i<10)
    //     ;
    // {
    //     printf("\n%d", i);
    //     i++;
    // }


    // post increment operator
    int i = 1;
    while(i++ < 5){
        printf("%d\n", i);
    }

    printf("\n\n");
    
    // pre increment operator
    int j = 1;
    while(++j < 5){
        printf("%d\n", j);
    }

    printf("\n");
    return 0;
}