/* demonstrating strucutres with pointers */
#include<stdio.h>

// To access members of a structure using pointers, 
// we use the '->' operator

typedef struct employee   
{
    int id;  
    char name[50]; 
    float salary;  
} tcs;

int main(int argc, char const *argv[])
{
    tcs *empPtr, emp;

    empPtr = &emp;

    printf("\n enter employee id: ");
    scanf("%d", &empPtr->id);
    printf(" enter employee name: ");
    scanf("%s", &empPtr->name);
    printf(" enter employee salary: ");
    scanf("%f", &empPtr->salary);


    printf("\n");
    printf("\n");

    printf( "employee id : %d\n", empPtr->id);
    printf( "employee name : %s\n", empPtr->name);
    printf( "employee salary : %f\n", empPtr->salary);
     
    return 0;
}

