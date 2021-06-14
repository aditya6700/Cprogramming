/* library funcitons */

#include <stdio.h>
#include <math.h>

int main(){

    float a = 1/1.414;
    float x,y,z,p;

    x = sin(a);
    y = cos(a);
    z = tan(45);
    p = pow(5,3);

    printf("\n%f %f %f %f\n",x,y,z,p);

    return 0;

}