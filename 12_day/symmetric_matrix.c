/* program to find if a square matrix is symmetric or not */

#include<stdio.h>

int main(){
    int arr[3][3], i, j, count=0;

    printf("\n enter a matrix to check wheather it is symmetric or not: \n");

    for (i = 0; i < 3;i++){
        for (j = 0; j < 3;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n The matrix you have entered is: \n\n");
     for (i = 0; i < 3;i++){
        for (j = 0; j < 3;j++){
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }

    /* checking for the symmetry */
     for (i = 0; i < 3;i++){
        for (j = 0; j < 3;j++){
            if(arr[i][j] == arr[j][i])
                count++;
        }
    }

    if(count == 9)
        printf("\n Given matrix is symmetric");
    else    
        printf("\n Given matrix is not symmetric");


    printf("\n");
    return 0;
}