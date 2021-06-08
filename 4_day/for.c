/* for loop 
syntax:
    for(initialisation; test condition; updation){
        do this;
    }
*/

#include <stdio.h>
int main(){

    // calculaiting simple interest
    // Simple Interest (SI) =  (P x R x N)/100

    // // method - 1
    // int p, n;
    // double r, si;

    // for (int count = 0; count < 3; count++)
    // {
    //     printf("\n enter principal amount, rate of interst, time period ");
    //     scanf("%d %lf %d", &p, &r, &n);

    //     si = (p * n * r) / 100;
    //     printf("\n your simple interest = %lf\n\n", si);
    // }

    // // method - 2
    // int count = 0;

    // for (; count < 5; count++)
    // {
    //     printf("%d\n", count);
    // }

    // // method - 3
    
    // for (int count = 0; count < 5; )
    // {
    //     printf("%d\n", count);
    //     count++;
    // }

    // // method - 4
    // int count = 0;

    // for (; count < 5; )
    // {
    //     printf("%d\n", count);
    //     count++;
    // }

    
    // method - 5
    int i;
    for (i = 0; i++ < 5;){
        printf("%d\n", i);
    }

    printf("\n\n");
    // method - 6
    int j;
    for (j = 0; ++j < 5;){
        printf("%d\n", j);
    }

        printf("\n");
    return 0;
}
