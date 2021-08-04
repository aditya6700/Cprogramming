/* Demonstration of Strings with pointers */
// * Here the string is stored at some random memory location and 
// *  the address of the string is stored in char pointer

#include<stdio.h>

int main(int argc, char const *argv[])
{
    char name[] = "Lenovo";
    char *c = "Lenovo";

    // 1- we cannot assign a string to another string
    char str1[] = "World", str2[25];
    // str2 = str1;

    // 2- we can assign a char pointer to another char pointer
    char *a = "Hello", *b;
    b = a;

    // 3- once a string is defined it cannot be intialized to another set of characters
    // str1 = "hi"; // won't work

    // 4- char pointer can be intialized to another set of characters
    a = "hello world"; // will work

    printf("\n");
    while (*a != '\0')
    {
        printf("%c", *a);
        a++;
    }
    

    printf("\n");
    return 0;

}