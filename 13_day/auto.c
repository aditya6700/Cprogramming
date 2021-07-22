/**********************************
 *  Automatic storage class;
************************************
    storage: Memory
    default: garbage value
    scope: block scope
    lifetime: Till the control remains in the block
    keyword: auto
*************************************/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    // auto int i, h, k;
    // printf("\n %d\t%d\t%d\n", i, h, k);

    auto int a = 1;
    {
        auto int a = 2;
        {
            auto int a = 3;
            printf("\n %d", a);
        }
        printf("\n %d", a);
    }
    printf("\n %d\n", a);

    return 0;
}
