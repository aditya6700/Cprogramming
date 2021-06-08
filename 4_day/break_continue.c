/* break and continue */

#include <stdio.h>
#include <stdbool.h>

int main(){

    // // break;
    // int i;
    // while (true)
    // {
    //     printf("\nenter a number ");
    //     scanf("%d",&i);
    //     if (i==10)
    //     {
    //         printf("you are very obident\n");
    //         break;
    //     }
    // }

    // continue;
    int i, j;
    
    for (i = 1; i <= 2; i++)
    {
        for (j = 0; j <= 5; j++)
        {
            if (i==j)
            {
                printf("hi hello");
                continue;
                printf("hi hello");
                printf("hi hello");
            }
            
            printf("i = %d \t j = %d\n", i, j);
        }
        printf("\n");
    }
    

    return 0;
}