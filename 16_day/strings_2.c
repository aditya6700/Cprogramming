/* demonstration of input of strings with multiple words */

#include<stdio.h>
void method1();
void method2();
void method3();

int main(int argc, char const *argv[])
{
    
    printf("\n");
    method1();

    printf("\n");
    method2();

    printf("\n");
    method3();

    printf("\n");
    return 0;

}


void method1(){
    char name[30];

    printf("\n Enter your laptop name: --> ");
    scanf("%s", &name);

    printf("\n %s is the best selling laptop in the market",name);
}

void method2(){
    char name[30];

    printf("\n Enter your laptop name: --> ");
    gets(name);

    puts(name);
    puts("is the best selling laptop in the market");
}

void method3(){
    char name[30];

    printf("\n Enter your laptop name: --> ");
    scanf("%[^\n]s", &name);

    printf("\n %s is the best selling laptop in the market",name);
}
