/* array of strucutres */
#include<stdio.h>

typedef struct employee  // total size = 4 + 50 + 4 = 58
{
    int id; // size 4
    char name[50]; // size 50
    float salary;  // size 4
} face; 



int main(int argc, char const *argv[])
{
    face emp[5]; // 5*58 = 290

    for (int i = 0; i < 5; i++)
    {
        printf("\n enter employee %d id: ",i+1);
        scanf("%d", &emp[i].id);
        printf(" enter employee %d name: ",i+1);
        scanf("%s", &emp[i].name);
        printf(" enter employee %d salary: ",i+1);
        scanf("%f", &emp[i].salary);
    }
    
        printf("\n");
        printf("\n");

    for (int i = 0; i < 5; i++)
    {  
        printf( "employee %d id : %d\n", i+1, emp[i].id);
        printf( "employee %d name : %s\n", i+1, emp[i].name);
        printf( "employee %d salary : %f\n", i+1, emp[i].salary);
        printf("\n");
    }

 

    printf("\n");
    return 0;
}
