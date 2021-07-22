/**********************************
 *  Register storage class;
************************************
    storage: CPU Register
    default: garbage value
    scope: block scope
    lifetime: Till the control remains in the block
     keyword: register
*************************************/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    register int i;
    printf("\n\t%d", i);

    while (1)
    {
        printf("\n\t%d", i);
        if(i==9)
            break;
    }
    

    return 0;
}
