/**********************************
 *  Static storage class
************************************
    storage: Memory
    default: 0
    scope: block scope
    lifetime: value of variable presists between multiple function calls
     keyword: static
*************************************/

#include<stdio.h>
void auto_increment();
void static_increment();

int main(int argc, char const *argv[])
{
    // auto_increment();
    // auto_increment();
    // auto_increment();
    // auto_increment();

    static_increment();
    static_increment();
    static_increment();
    static_increment();

    printf("\n");
    return 0;
}

void auto_increment(){
    auto int i = 1;
    printf("\n%d", i);
    i++;
}

void static_increment(){
    static int i = 1;
    printf("\n%d", i);
    i++;
}
