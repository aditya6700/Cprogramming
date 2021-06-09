/* switch case statements */
/* control based statemetns */
// syntax:

    // switch (expression)
    // {
    //     case /* constant-expression */:
    //         /* code */
        
    //     case /* constant-expression */:
    //         /* code */
        
    //     case /* constant-expression */:
    //         /* code */
        
    //     case /* constant-expression */:
    //         /* code */
    
    //     default:
    //         /* code */
    // }


#include <stdio.h>

int main(){

    printf("\n");

    // int i = 5;

    // // without break stmt
    // switch (i)
    // {
    //     case 1:
    //         printf(" this is case 1\n");
    //     case 2:
    //         printf(" this is case 2\n");
    //     case 3:
    //         printf(" this is case 3\n");

    //     default:
    //         printf(" you are in default case\n");
    // }


    // // with break statemnt
    // switch (i)
    // {
    //     case 1:
    //         printf(" this is case 1\n");
    //         break;
    //     case 2:
    //         printf(" this is case 2\n");
    //         break;
    //     case 3:
    //         printf(" this is case 3\n");
    //         break;

    //     default:
    //         printf(" you are in default case\n");
    // }


    // Rules
    // // 1 -- switch(expression) accepts only integer constants
    // char f1 = 'D';
    
    // switch (f1)
    // {
    //     case 65:
    //         printf(" this is case 1\n");
    //         break;
    //     case 68:
    //         printf(" this is case 2\n");
    //         break;
    //     case 70:
    //         printf(" this is case 3\n");
    //         break;

    //     default:
    //         printf(" you are in default case\n");
    // }

    // // 2 -- case statemets does not require any order
    // int f1 = 'D';
    
    // switch (f1)
    // {
    //     case 898:
    //         printf(" this is case 1\n");
    //         break;
    //     case 68:
    //         printf(" this is case 2\n");
    //         break;
    //     case 170:
    //         printf(" this is case 3\n");
    //         break;

    //     default:
    //         printf(" you are in default case\n");
    // }

    // // 3 -- There can be multiple case statemts for once condition
    // char r3 = 'C';
    
    // switch (r3)
    // {
    //     case 'a':
    //     case 'A':
    //         printf(" this is case 1\n");
    //         break;
    //     case 'b':
    //     case 'B':
    //         printf(" this is case 2\n");
    //         break;
    //     case 'C':
    //     case 'c':
    //         printf(" this is case 3\n");
    //         break;

    //     default:
    //         printf(" you are in default case\n");
    // }

    // // 4 -- no need to enclose multiple statements with in flower braces for cases
    // char r4 = 'C';
    
    // switch (r4)
    // {
    //     case 'a':
    //     case 'A':
    //         printf(" this is case 1\n");
    //         printf(" this is case 1\n");
    //         break;
    //     case 'b':
    //     case 'B':
    //         printf(" this is case 2\n");
    //         printf(" this is case 2\n");
    //         break;
    //     case 'C':
    //     case 'c':
    //         printf(" this is case 3\n");
    //         printf(" this is case 3\n");
    //         break;

    //     default:
    //         printf(" you are in default case\n");
    // }

    /*  5 -- only valid expression constants are allowed in case statements
            // conditional statemtns are not allowed

            // ex:
                // -i <= 9;  not allowed
                // 4 == 5; allowed */
    // int r5 = 5;

    // switch (r5)
    // {
    //     // case r5 > 1:
    //         // printf(" this is case 1\n");
    //         // break;
    //     case 2 == 2:
    //         printf(" this is case 2\n");
    //         break;
    //     case 3 * 2:
    //         printf(" this is case 3\n");
    //         break;

    //     default:
    //         printf(" you are in default case\n");
    // }

    // // 6 --- unecessary statemnts are not allowed only case statements are allowed
    int r6 = 6;

    switch (r6)
    {
        printf(" this is case 1\n");

        case 2 == 2:
            printf(" this is case 2\n");
            break;
        case 3 * 2:
            printf(" this is case 3\n");
            break;

        default:
            printf(" you are in default case\n");
    }


    // // 7 ---  duplication of cases is not accepted

    return 0;
}