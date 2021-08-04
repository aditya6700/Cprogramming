/* difference between structure and union */
#include <stdio.h>

union unionJob
{
    //defining a union
    char name[32];
    float salary;
    int workerNo;
} uJob;

struct structJob
{
    char name[32];
    float salary;
    int workerNo;
} sJob;

int main()
{
    printf("\nsize of union = %d bytes", sizeof(uJob));
    printf("\nsize of structure = %d bytes\n", sizeof(sJob));
    
    return 0;   
}