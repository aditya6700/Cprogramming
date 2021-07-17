#include<stdio.h>
int factWithoutRecursion(int);
int factWithRecursion(int);

int main(){

    int i, result;

    printf("\nenter a number to find it's factorial: ");
    scanf("%d", &i);

    result = factWithoutRecursion(i);
    printf("\nfactorial of given number without recursion is %d", result);
    
    result = factWithRecursion(i);
    printf("\nfactorial of given number with recursion is %d", result);

    printf("\n");
    return 0;
}
// 1*2*3*4*.....*n
int factWithoutRecursion(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact = fact * i;
    }
    // fact=1
    // fact=1*1
    // fact=1*2
    // fact=2*3
    // fact=6*4
    // fact=24*5
    
    return fact;
}

int factWithRecursion(int n){
    int fact;

    if(n==1){
        return 1;
    }
    else{
        return (n * factWithRecursion(n - 1));
    }
}

