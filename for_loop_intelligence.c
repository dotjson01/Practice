#include<stdio.h>

int main(){
    printf("y\t x\t i\n");
    for(int y=1;y<=6;y++){
        for(double x=5.5;x<=12.5;x+=0.5){
            double i=2+(y+0.5*x);
            printf("%d\t %.1f\t %.2f\n",y,x,i);
        }
    }
}