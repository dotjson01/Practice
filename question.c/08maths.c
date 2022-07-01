#include<stdio.h>
#include<math.h>

int main(){
    int x,y,degree;
    float r,phi,p;
    printf("enter the co-ordinates point x,y:");
    scanf("%d%d",&x,&y);
    //calcualte the value of r 
    r=sqrt(x*x+y*y);
    // calculate the value of phi
    phi=atan(y/x);
    
    //print polar co ordinates on screen 
    printf("the polar co ordinates of (%d,%d)is (%f,%f)",x,y,r,phi);

    //convert radian value into degree 
    p=3.141;
    degree=phi*(180/p);
    printf("\nthe polar co ordiantes in degree(%f,%d)",r,degree);


    return 0;
}