/* nested strucutres */
#include<stdio.h>

// method 1 -> seperate structure
typedef struct details
{
    char address[100];
    char phone[10];
}location;

typedef struct employee  // total size = 4 + 50 + 4 + 100 = 158
{
    int id; // size 4
    char name[50]; // size 50
    float salary;  // size 4

    location comu; // 100

} face; 


// // method 2 -> embeded structure
// typedef struct employee  // total size = 4 + 50 + 4 + 100 = 158
// {
//     int id; // size 4
//     char name[50]; // size 50
//     float salary;  // size 4

//     struct details
//     {
//         char address[100];
//         char phone[10];
//     }comu;

// } face;


int main(int argc, char const *argv[])
{
    face emp; // 5*58 = 290

  
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


    printf("\n");
    printf("\n");

    printf( "employee id : %d\n", emp.id);
    printf( "employee name : %s\n", emp.name);
    printf( "employee salary : %f\n", emp.salary);
    printf( "employee phone : %s\n", emp.comu.phone);
    printf( "employee address : %s\n", emp.comu.address);
    printf("\n");
  

 

    printf("\n");
    return 0;
}
