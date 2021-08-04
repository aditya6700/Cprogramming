/* passing structure to a function */
#include<stdio.h>

typedef struct details
{
    char address[100];
    char phone[10];
}location;

typedef struct employee   
{
    int id;  
    char name[50];   
    float salary;   

    location comu;  

} face; 


void display(face); // prototype declaration


int main () 
{ 
    face emp;

    printf("\n enter employee id: ");
    scanf("%d", &emp.id);
    printf(" enter employee name: ");
    scanf("%s", &emp.name);
    printf(" enter employee salary: ");
    scanf("%f", &emp.salary);
    printf(" enter employee phone: ");
    scanf("%s", &emp.comu.phone);
    printf(" enter employee address: ");
    scanf("%s", &emp.comu.address);

    display(emp);

    printf("\n");
    return 0;
} 

void display(face emp){ 
    printf("\n\n Printing the details....\n");

    printf( "employee id : %d\n", emp.id);
    printf( "employee name : %s\n", emp.name);
    printf( "employee salary : %f\n", emp.salary);
    printf( "employee phone : %s\n", emp.comu.phone);
    printf( "employee address : %s\n", emp.comu.address);
}