/* passing values between functions */

#include <stdio.h>
#include <stdlib.h>

int power(int,int); /* prototype */

int main(){

    int n1;
    int n2,answer;
    printf("\n enter a number and the power to be raised: ");
    scanf("%d %d",&n2,&n1);

    answer = power(n2,n1);  // actual parameters
    printf("\n %d to the power %d = %d\n",n2,n1,answer);

    return 0;
}


int power(int a, int b){  // formal parameters

    int result = 1;

    for(int i = 1; i <= b; i++ ){
        // result = result * a; 
        result *= a ;
    }

    return result;

}
