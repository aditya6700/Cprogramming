/* scope and order */

#include <stdio.h>
void display(int);

int main(){

    // int i = 20;
    // display(i);
    // printf("%d\n",i);

    // order of passing values funcitons
    int j = 1;
    printf("\n%d %d %d\n",j,++j,j++);

            

    return 0;

}

void display(int i){  // i = 20

    int k = 30;
    i+=20;   // i = 40
    printf("\n%d\n",i);
    printf("%d\n",k);

}