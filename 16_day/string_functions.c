/* standard library string functions */

#include<stdio.h>
#include<string.h>

void length();
void copy();
void concat();
void compare();

int main(int argc, char const *argv[])
{
    
    printf("\n");
    length();

    printf("\n");
    copy();

    printf("\n");
    concat();

    printf("\n");
    compare();

    printf("\n");
    return 0;
}

void length(){
    char arr[] = "Bamboozled";
    int len1, len2;

    len1 = strlen(arr);
    len2 = strlen("Humpty Dumpty");

    printf("strlen() --- This function counts the number of characters present in a string.\n");
    printf("-------------------------------------------------------------------------------\n");

    printf("string = %s length = %d\n", arr, len1);
    printf("string = %s length = %d\n", "Humpty Dumpty", len2);
}

void copy(){

    char source[] = "Sayonara";
    char target[20];

    strcpy(target, source);

    printf("strcpy() This function copies the contents of one string into another.\n");
    printf("----------------------------------------------------------------------\n");

    printf("source string = %s\n", source);
    printf("target string = %s\n", target);
}

void concat(){

    char source[] = "Folks!";
    char target[30] = "Hello";

    strcat(target, source); // target+source

    printf("strcat() This function concatenates the source string at the end of the target string.\n");
    printf("--------------------------------------------------------------------------------------\n");
   
    printf("source string = %s\n", source);
    printf("target string = %s\n", target);
}

void compare(){

    char string1[] = "Jerry"; 
    char string2[] = "Ferry";
    int i, j, k;

    i = strcmp(string1, "Jerry");
    j = strcmp(string1, string2);
    k = strcmp(string1, "Jerry boy");

    printf("strcmp() This is a function which compares two strings to find out whether they are same or different.\n");
    printf("-------------------------------------------------------------------------------------------------------\n");

    printf("%d %d %d\n", i, j, k);
}

