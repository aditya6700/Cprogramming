/********************************************
 * Pointer Arithemetic operations 
 * (a) Array elements are always stored in contiguous memory locations.
 * (b) A pointer when incremented always points to an immediately next
 *     location of its type.
 **************************************/ 
# include <stdio.h>
void proof();

int main()
{
    int i = 3, *x;
    float j = 1.5, *y;
    char k = 'c', *z;

    printf("\nValue of i = %d\n", i);
    printf("Value of j = %f\n", j);
    printf("Value of k = %c\n\n", k);

    x = &i; // 1000
    y = &j; // 2000
    z = &k; // 3000

    printf("Original address in x = %u\n", x);
    printf("Original address in y = %u\n", y);
    printf("Original address in z = %u\n\n", z);

    x++; // == x = x + 1 
    y++;
    z++;

    printf("New address in x = %u\n", x);
    printf("New address in y = %u\n", y);
    printf("New address in z = %u\n\n", z);

    printf("\n\n");    
    proof();
    printf("\n");
    return 0;
}

void proof(){

    int num[] = { 24, 34, 12, 44, 56, 17 };
    int i;

    for ( i = 0 ; i <= 5 ; i++ )
    {
        printf("element %d at index %d ",num[i], i);
        printf("address = %u\n", &num[i]);
    }
}