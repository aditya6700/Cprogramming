/* nested for loop */

#include <stdio.h>

int main(){
    // 2x3 matrix
    // 1 2 3
    // 4 5 6

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d\t", j);
    //     }
    //     printf("\n");
    // }


    int r, c, sum ;
    for ( r = 1 ; r <= 3 ; r++ ) /* outer loop */
    {
        for ( c = 1 ; c <= 5 ; c++ ) /* inner loop */
        {
            printf ( "r = %d c = %d sum = %d\n", r, c, r + c  ) ;
        }
    }

    // r = 1 c = 1 sum = 2
    // r = 1 c = 2 sum = 3
    // r = 1 c = 3 sum = 4
    // r = 1 c = 4 sum = 5
    // r = 1 c = 5 sum = 6
    // r = 2 c = 1 sum = 3
    // r = 2 c = 2 sum = 4
    // r = 2 c = 3 sum = 5
    // r = 2 c = 4 sum = 6
    // r = 2 c = 5 sum = 7
    // r = 3 c = 1 sum = 4
    // r = 3 c = 2 sum = 5
    // r = 3 c = 3 sum = 6
    // r = 3 c = 4 sum = 7
    // r = 3 c = 5 sum = 8
    
    return 0;
}