/* demonstrating typedef in c */
#include<stdio.h>
#include<string.h>

void typedefExample();
void typedefPointer();
void typedefStruct();

typedef struct employee  // total size = 4 + 50 + 4 = 58
{
    int id; // size 4
    char name[50]; // size 50
    float salary;  // size 4
} tcs;

int main(int argc, char const *argv[])
{

    // typedefExample();
    typedefPointer();
    // typedefStruct();

    return 0;
}


void typedefExample(){
    typedef unsigned int usint;
    usint i,j;

    i=10;
    j=20;

    printf("Value of i is :%d",i);
    printf("\nValue of j is :%d",j);
}

void typedefPointer(){

    typedef int* iptr;

    iptr a, b;

    int c=90, d=78;

    a = &c;
    b = &d;

    printf("Value of c is stored at :%u",a);
    printf("\nValue of d is stored at :%u",b);
}

void typedefStruct(){

    tcs emp1;

    emp1.id = 101;
    strcpy(emp1.name, "David");
    emp1.salary = 45565;

    printf("\n employee 1 id : %d\n", emp1.id);
    printf( "employee 1 name : %s\n", emp1.name);
    printf( "employee 1 salary : %f\n", emp1.salary);
    printf("\n");
}