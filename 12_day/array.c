#include <stdio.h>

int main(){

    int marks[5]; /* array declration */
    int sum = 0, avg = 0;

    /* diffrent ways to initialise an array */
    // 1. data_type variable[size];
    // 2. data_type variable[size] = {n, n, n, n, n};
    // 2. data_type variable[] = {n, n, n, n, n, n,......};

    for (int i = 0; i < 5; i++){
        printf("\n enter marks: ");
        scanf("%d", &marks[i]); /* store data */
    }

    for (int i = 0; i < 5; i++){
        sum = sum + marks[i]; /* read data */
    }

    avg = sum / 5;
    printf("\n Average marks are %d",avg);

    printf("\n");
    return 0;
}