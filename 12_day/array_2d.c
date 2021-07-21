#include<stdio.h>
#include<stdlib.h>

int main(){

    int student[3][2];

    for (int i = 0; i < 3; i++ ){
        printf("\n enter section and roll no: ");
        scanf("%c %d", &student[i][0], &student[i][1]);
        fflush(stdin);
        // for (int j = 0; j < 2; j++){
        //      printf("\n enter section and roll no: ");
        //     scanf("%c %d", &student[i][j], &student[i][j]);
        // }
    }

    for (int i = 0; i < 3; i++ )
        printf("\n section-%c || roll no-%d ",student[i][0], student[i][1]);

    printf("\n");
    return 0;
}