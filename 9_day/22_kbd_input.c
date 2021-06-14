/*************************************************
 * Any character is entered through the keyboard, write a program to
determine whether the character entered is a capital letter, a small
case letter, a digit or a special symbol.
The following table shows the range of ASCII values for various
characters:
--------------------------------------------------------------
| Characters           |         ASCII Values                |
--------------------------------------------------------------  
| A – Z                | 65 – 90                             |
| a – z                | 97 – 122                            |
| 0 – 9                | 48 – 57                             |
| special symbols      | 0 - 47, 58 - 64, 91 - 96, 123 - 127 |
---------------------------------------------------------------
*************************************************/

#include <stdio.h>

int main(){

    char myChar;

    printf("\n Enter any character: ");
    scanf("%c", &myChar);

    if((myChar >= 65) && (myChar <= 90 ))
        printf("\n Entered character is a capital letter");
    if((myChar >= 97) && (myChar <= 122))
        printf("\n Entered character is a lowercase letter");
    if((myChar >= 48) && (myChar <= 57))
        printf("\n Entered character is a number");
        // 0 - 47, 58 - 64, 91 - 96, 123 - 127 
    if((myChar >= 0 && myChar <= 47) ||
            (myChar >= 58 && myChar <= 64) ||
                (myChar >= 91 && myChar <= 96) ||
                    (myChar >= 123 && myChar <= 127))
        printf("\n Entered character is a special character");

    printf("\n");
    return 0;
}