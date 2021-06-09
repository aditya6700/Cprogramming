/* goto */
/* terenary operator */
// syntax:
    // (condition) ? true : false;

#include <stdio.h>
#include <stdlib.h>

int main(){

    int score = 26;

    // // goto;
    // if (score >= 50)
    //     goto result;
    // else
    // {
    //     printf("\n you have failed\n");
    //     exit(1);
    // }

    // result:
    //     printf("\n you have passed\n");



    // terenary operator

    // if (score >= 50)
    //     printf("\n you have passed\n");
    // else
    //     printf("\n you have failed\n");

    score = 89;
    (score >= 50) ?  
    (score >= 80) ?  printf("\n you are topper\n") : printf("\n you have passed\n") 
    :  printf("\n you have failed\n");
    
    return 0; 
}