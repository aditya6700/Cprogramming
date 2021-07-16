#include<stdio.h>
#include<math.h>
void evenOdd();
void swap();
void arithmetic();
int addition(int, int);
int subraction(int, int);
int multiplicaiton(int, int);
int division(int, int);
int powerOf(int);
void factorial();

int main(){

    int choice;
    char valid;

   
    do
    {
        printf("\n Enter your choice");
        printf("\n ----------------------");
        printf("\n 1. Even or odd");
        printf("\n 2. swapping of two numbers");
        printf("\n 3. Arithmetic operations");
        printf("\n 4. Factorial\n");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                evenOdd();
                break;
            case 2:
                swap();
                break;
            case 3:
                arithmetic();
                break;
            case 4:
                factorial();
                break;

            default:
                printf("\n entered choice does not exist");
                break;
        }

        printf("\n\n do you want to run again(Y/N)? ");
        scanf(" %c", &valid);
        
    } while (valid == 'Y' || valid == 'y');
    

    printf("\n");
    return 0;
}

void evenOdd(){
    int n;
    printf("\n enter a number to check for even or odd ");
    scanf("%d",&n);

    if(n % 2 == 0){
        printf("\n entered number is even");
    }else{
        printf("\n eneterd number is odd");
    }
}

void swap(){
    int a, b, temp;

    printf("\n enter two numbers ");
    scanf("%d %d",&a,&b);

    printf("\n values before swapping a = %d, b = %d", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("\n values after swapping a = %d, b = %d", a, b);
}

void arithmetic(){
    int type, result, n1, n2;

    printf("\n Enter your choice");
    printf("\n ----------------------");
    printf("\n 1. Addition");
    printf("\n 2. Subraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n 5. exponential\n");
    scanf(" %d",&type);

    printf("\n enter two numbers ");
    scanf("%d %d", &n1, &n2);

    switch (type)
    {
        case 1:
            result = addition(n1, n2);
            break;
        case 2:
            result = subraction(n1, n2);
            break;
        case 3:
            result = multiplicaiton(n1, n2);
            break;
        case 4:
            result = division(n1, n2);
            break;
        case 5:
            result = powerOf(n1);
            break;
        
        default:
            break;
    }

    printf("\n result is %d", result);
}

int addition(int n1, int n2){
    return n1 + n2;
}
int subraction(int n1, int n2){
    return n1 - n2;
}
int multiplicaiton(int n1, int n2){
    return n1 * n2;
}
int division(int n1, int n2){
    return n1 / n2;
}
int powerOf(int n1){
    return pow(n1,3);
}

void factorial(){
    int n, fact=1;
    printf("\n enter a number to find it's factorial ");
    scanf("%d",&n);

    for (int i = 1; i <= n;i++){
        fact = fact * i;
    }

    printf("\n factorial of %d is %d", n, fact);
}

// topics covered so far
// break
// operators
// functions
// if else
// switch
// do while
// logical operators
// for loop