/* Program to demonstrate intializing and printing strings */
#include<stdio.h>
void string1();
void string2();
void string3();

int main(){

    printf("\n");
    string1();

    printf("\n");
    string2();

    printf("\n");
    string3();

    printf("\n");
    return 0;
}

void string1(){
    char name[] = {'L', 'e', 'n', 'o', 'v', 'o', '\0'};
    printf("string using individual characters: ");

    for (int i = 0; i < 6; i++)
    {
        printf("%c", name[i]);
    }

}

void string2(){

    char name[] = "Lenovo";
    printf("string using group characters: ");

    int i = 0;
    while (name[i] != '\0')
    {
        printf("%c",name[i]);
        i++;
    }
    
}


void string3(){

    char name[] = "Lenovo";

    printf("Printing string using format specifier %s", name);
}
