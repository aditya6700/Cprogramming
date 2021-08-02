/* accessing the array elements */

#include<stdio.h>
void method1();
void method2();

int main(int argc, char const *argv[])
{
    printf("\n Accesing array elements normal way");
    printf("\n -------------------------------- ");
    method1();
    printf("\n");

    printf("\n Accesing array elements using pointers");
    printf("\n -------------------------------- ");
    method2();
    printf("\n");

    return 0;
}

void method1(){
    int num[] = { 24, 34, 12, 44, 56, 17 };
    int i;

    for ( i = 0 ; i <= 5 ; i++ )
    {
        printf("\naddress = %u ", &num[i]);
        printf("element = %d ", num[i]);
    }
}

void method2(){
    int num[] = { 24, 34, 12, 44, 56, 17 };
    int i, *j;

    j = &num[0];
    // or
    j = num;

    for ( i = 0 ; i <= 5 ; i++ )
    {
        printf("\naddress = %u ", &num[i]);
        printf("element %d ",*j);
        j++; 
    }
}
