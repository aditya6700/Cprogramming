/*******
 complex if else statements
 *************/

#include <stdio.h> 

int main(){

    int m1,m2,m3;
    double percent;

    printf("\n enter your marks: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    percent = ((m1 + m2 + m3) * 100) / 300;

    // if(percent>=60)
    //     printf("\n first class");
    // else if(percent >= 50){
    //     printf("\n second class");
    // }
    // else if(percent >=40){
    //     printf("\n third class");
    // }
    // else
    //     printf("\n fail");

    if(percent>=60)
        printf("\n first class  %lf",percent);

    if((percent >= 50) && (percent < 60)){
        printf("\n second class  %lf",percent);
    }
    if((percent >= 40) && (percent < 50)){
        printf("\n third class  %lf",percent);
    }
    if(percent < 40)
        printf("\n fail %lf",percent);

    printf("\n");
    return 0;
}