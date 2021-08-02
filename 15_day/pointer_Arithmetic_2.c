/**********************************************
*  Pointer Arithemetic operations------------
*  Do not attempt the following operations on
*  pointers... they would never work out.
*
*  (a) Addition of two pointers
*  (b) Multiplication of a pointer with a Number
*  (c) Division of a pointer with a Number 
**********************************************/

#include<stdio.h>
void addNumPointer();
void SubNumPointer();
void SubPointerPointer();
void comparePointer();


int main(int argc, char const *argv[])
{
    printf("\n Addition of number and pointer");
    printf("\n -------------------------------- ");
    addNumPointer();
    printf("\n");

    printf("\n subtraction of number and pointer");
    printf("\n ---------------------------------- ");
    SubNumPointer();
    printf("\n");

    printf("\n subtraction of pointer and pointer");
    printf("\n ------------------------------------ ");
    SubPointerPointer();
    printf("\n");

    printf("\n comparision of pointers");
    printf("\n ------------------------------ ");
    comparePointer();

    printf("\n");
    return 0;
}

void addNumPointer(){
    int i = 4, *j, *k;

    j = &i; // 1000
    printf("\n j value = %u",j);
    
    j = j + 1; // 1004
    printf("\n j value = %u",j);
    
    j = j + 9; // 1036
    printf("\n j value = %u",j);
    
    k = j + 3; // 1048
    printf("\n k value = %u",k);
}

void SubNumPointer(){
    int i = 4, *j, *k;

    j = &i; // 1000
    printf("\n j value = %u",j);
    
    j = j - 2; // 992
    printf("\n j value = %u",j);
    
    j = j - 5; // 992 - 20
    printf("\n j value = %u",j);
    
    k = j - 6; // 972 - 24
    printf("\n k value = %u",k);
}

void SubPointerPointer(){
    // address of arr starts with 1000
    //            00  04  08  12  16  20  24
    int arr[] = { 10, 20, 30, 45, 67, 56, 74 };
    int *i, *j;
    

    i = &arr[1]; // 1004
    j = &arr[5]; // 1020

    //                                      4    36
    printf("\n j-i == %d\n *j-*i == %d\n", j-i, *j-*i );
}

void comparePointer(){
    // address of arr starts with 1000
    //            00  04  08  12  16  20  
    int arr[] = { 10, 20, 36, 72, 45, 36 };
    int *j, *k;
  

    j = &arr[4]; // 1016

    k = ( &arr[0] + 4 ); // 1016
    // or
    k = ( arr + 4 ); // 1016

    if ( j == k )
        printf("\n The two pointers point to the same location\n" );
    else
        printf("\n The two pointers do not point to the same location\n" );
}

