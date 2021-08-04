/* declaring and accessing structures */
#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    struct employee  // total size = 4 + 50 + 4 = 58
    {
        int id; // size 4
        char name[50]; // size 50
        float salary;  // size 4
    }; 

    struct employee emp1, emp2;

    // we access structure members using '.' operator
    // saving details for employee 1
    emp1.id = 101;
    strcpy(emp1.name, "David");
    emp1.salary = 45565;

    // saving details for employee 2
    emp2.id = 202;
    strcpy(emp2.name, "Hari");
    emp2.salary = 658925;

    printf( "\nemployee 1 id : %d\n", emp1.id);
    printf( "employee 1 name : %s\n", emp1.name);
    printf( "employee 1 salary : %f\n", emp1.salary);
    printf("\n");
    printf( "employee 2 id : %d\n", emp2.id);
    printf( "employee 2 name : %s\n", emp2.name);
    printf( "employee 2 salary : %f\n", emp2.salary);

    printf("\n");
    return 0;
}
