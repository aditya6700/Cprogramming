/************************************************************
 * In digital world colors are specified in Red-Green-Blue (RGB) format,
 * with values of R, G, B varying on an integer scale from 0 to 255. 
 * Inprint publishing the colors are mentioned in Cyan-Magenta-Yellow-
 * Black (CMYK) format, with values of C, M, Y, and K varying on a real
 * scale from 0.0 to 1.0. W
 * rite a program that converts RGB color to CMYK color 
 * as per the following formulae:
 * 
 * White = Max(Red/255, Green/255, Blue/255)
 * 
 * cyan  = (white - red/255) / white
 * magenta = (white - green/255) / white
 * yellow = (white - blue/255) / white
 * black = 1 - white
 * 
 * Note that if the RGB values are all 0, then the CMY values
 * are all 0 and the K value is 1.
***********************************************************************/

#include <stdio.h>
int maxi(int, int, int);

int main(){

    float red, green, blue;
    float cyan, magenta, yellow, black, white;

    printf("\n enter RGB value seperated with space: ");
    scanf("%f%f%f", &red, &green, &blue);
    

    if( red == 0 && green == 0 && blue == 0){
        cyan = magenta = yellow = 0;
        black = 1;
    }
    else{

        red = red / 255.0;
        green = green / 255.0;
        blue = blue / 255.0;

        white = maxi(red, green, blue);

        cyan = (white - red) / white;
        magenta = (white - green) / white;
        yellow = (white - blue) / white;
        black = 1 - white;

    }

    printf("\n RGB code is (%f, %f, %f)\n CMYK code is (%f, %f, %f, %f)", red*255, green*255, blue*255, cyan, magenta, yellow, black);

    printf("\n");
    return 0;
}

int maxi(int r,int g, int b){

    if ((r > g) && (r > b))
        return r;
    else if ((g > r) && (g > b))
        return g;
    else if ((b > r) && (b > g))
        return b;

}