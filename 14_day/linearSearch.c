/* linear search */

#include<stdio.h>
int linearSearch(int [],int, int);

int main(int argc, char const *argv[])
{
    int array[100], n, key, result;

    printf("\nEnter number of elements upto 100: ");
    scanf("%d", &n);

    printf("\nEnter %d integers: ", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("\nEnter the element you want to search: ");
    scanf("%d", &key);

    result = linearSearch(array,key, n);
    (result == 0) ?  printf("element %d is not found", key)
                  :  printf("element %d is found at location %d", key, result);

    printf("\n");
    return 0;
}

int linearSearch(int array[], int key, int n){

    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] == key)
            return i;
    }

    return 0;
}