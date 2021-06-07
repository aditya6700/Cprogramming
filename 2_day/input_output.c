/* input and output */

#include <stdio.h>

int main(){

    int a,b;
    double d1;
    char ini;

    // printf("\nenter your no and salary \n");
    // scanf("%d%lf", &a,&d1);

    // printf("\nyour no is %d\nsalary is %lf\n", a, d1);


    // printf("\nenter your no and salary \n");
    // scanf("%lf%d",&d1,&a);

    // printf("\nyour no is %d\nsalary is %lf\n", a, d1);
    
    // printf("\nenter your no and salary \n");
    // scanf("%d", &a);
    // fflush(stdin);
    // scanf("%lf", &d1);

    // printf("\nyour no is %d\nsalary is %lf\n", a, d1);
    
    printf("\nenter your no and initial \n");
    // scanf("%d%c", &a,&ini);

    // scanf("%d", &a);
    // fflush(stdin);
    // scanf("%c", &ini);

    scanf("%d %c", &a,&ini);

    printf("\nyour no is %d\ninitial is %c\n", a, ini);
    
    return 0;
}
