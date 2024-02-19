#include<stdio.h>
#include<math.h>

#define PI 3.14159265

int main(){
    float a=0.5;
    float w,x,y,z;
        a = a * (PI / 180.0);  // Convert degrees to radians

    w=sin(a);
    x=cos(a);
    y=tan(a);
    z=pow(a,2);
    printf("%f %f %f %f",w,x,y,z);
}