/**********************************
 *  External storage class
************************************
    storage: Memory
    default: 0
    scope: Global scope
    lifetime: As long as the program's execution doesn't come to an end
    keyword: ext
*************************************/

#include<stdio.h>

int i;
void inc();
void dec();

int main(int argc, char const *argv[])
{
    printf("\n initial value: %d", i);
    
    inc();
    inc();

    dec();
    dec();

    printf("\n");
    return 0;
}

void inc(){
    i += 1;
    printf("\n value incremented by 1: %d", i);
}

void dec(){
    i -= 1;
    printf("\n value decremented by 1: %d", i);
}
