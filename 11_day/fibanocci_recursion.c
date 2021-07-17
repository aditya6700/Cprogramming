/* Fibanocci series  
    0 1 1 2 3 5 8 13 21 34 55......   */


#include<stdio.h>
void FibanocciWithoutRecursion(int);
int FibanocciWithRecursion(int);

int main(){

    int n;
    printf("\nenter a number to find it's fibanocci series: ");
    scanf("%d", &n);

    // FibanocciWithoutRecursion(n);
    
    printf("\nFibanocci series with recursion: ");
    for(int i=0; i <= n; i++){
        printf("\n %d",FibanocciWithRecursion(i));
    }

    printf("\n");
    return 0;
}


void FibanocciWithoutRecursion(int n){
    int first=0, second=1,third;

    printf("\n%d\n%d",first,second);

    for(int i = 2; i<=n;i++){
        third = first+second;
        printf("\n%d",third);
        first=second;
        second=third;
    }
}

int FibanocciWithRecursion(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (FibanocciWithRecursion(n-1)+FibanocciWithRecursion(n-2));
}

    //                       f(5)
    //              f(4)        +          f(3)
    //         f(3)   +  f(2)        f(2)   +    f(1)
    //     f(2)+f(1)   f(1)+f(0)   f(1)+f(0)       1  
    // f(1)+f(0)+1       1+0        1 +0  


    
                      