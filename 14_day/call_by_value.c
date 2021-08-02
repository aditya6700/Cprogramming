#include<stdio.h>
void swaping(int, int);

int main(int argc, char const *argv[])
{
    int x = 10, y = 20;
    swaping(x,y);
    printf("\n x = %d || y = %d\n", x, y);
    return 0;
}

void swaping(int x, int y){
    int temp;

    printf("\n SWAPPING STARTED");
    temp = x;
    x = y;
    y = temp;
    printf("\n x = %d || y = %d", x, y);
}
