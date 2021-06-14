/* Functions */
/* function has three sections
1. function prototype declaration 
2. function body/definition
3. function calling */

#include <stdio.h>
void message();  /* funciton prototype decalration */
void italy();
void burma();
void India();

// int main(){

//     message(); /* funciton calling */
//     italy();
//     burma();
//     India();
//     burma();
//     burma();
//     burma();
//     italy();
//     printf("\n hi I'm in main fucntion\n");
//     return 0; 
// }

// void message(){  /* function body/definition */
//     printf("\n hi hello how are you?");
// }
// void italy(){  /* function body/definition */
//     printf("\n I'm in italy");
// }
// void India(){  /* function body/definition */
//     printf("\n I'm in India");
// }
// void burma(){  /* function body/definition */
//     printf("\n I'm in burma");
// }



/* RULES */
// 1 - There can be as many as functions in a single C program
// 2- There should be minimum one funciton and that is to be main()
// 3. each funciton in a program is called in a sequence that is defined in main()
// 4. we can call each function as many times as required
// 5. There is no rule that every function needs to be called in main()
// 6. No function is to be defined in another funciton



int main(){
    printf("\n hi I'm in main fucntion");
    message(); /* funciton calling */
    printf("\n hi I'm back in main fucntion\n");
    return 0; 
}

void message(){  /* function body/definition */
    printf("\n hi hello how are you?");
    italy();
    printf("\n I asked you that how are you?");
}
void italy(){  /* function body/definition */
    printf("\n I'm in italy");
    India();
    printf("\n I'm back in italy");
}
void India(){  /* function body/definition */
    printf("\n I'm in India");
    burma();
    printf("\n I'm back in India");
}
