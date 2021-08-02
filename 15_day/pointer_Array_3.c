/* Demonstration of passing an entire array to a function */

# include <stdio.h>
void display_1(int *, int);
void display_2();

int main( )
{
    int num[] = {24, 34, 12, 44, 56, 17};
    int length = sizeof(num) / sizeof(num[0]);
    // printf("\n%d\n", length);
    printf("\n");

    // display_1(&num[0], length);
    display_2();

    printf("\n");
    return 0 ;
}

void display_1 ( int *j, int n )
{
    for ( int i = 0 ; i <= n - 1 ; i++ )
    {
        printf("element = %d\n", *j);
        j++; /* increment pointer to point to next element */
    }
}

void display_2(){
    int num[] = {24, 34, 12, 44, 56, 17};

    for ( int i = 0 ; i <= 5 ; i++ )
    {
        printf("address = %u ", &num[i]);
        printf("element = %d %d ", num[i], *(num + i));
        printf("%d %d\n", *(i + num), i[num]);
    }
}
