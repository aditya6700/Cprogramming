/* demonstration of unions */
#include<stdio.h>
#include<string.h>

union car 
{ 
    char name[25]; 
    int price; 
};

int main(int argc, char const *argv[])
{
    union car c1;

    strcpy(c1.name, "GTX");
    c1.price = 98000; // retains only the latest declrared value

    printf("\n\n%s \t %d\n\n", c1.name, c1.price);
    return 0;
}
