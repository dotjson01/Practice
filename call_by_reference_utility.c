#include<stdio.h>

void areaperi(int , float *, float *); // fucntion declaration
 
int main(){
    int radius;
    float area,perimeter;
    printf("Enter the radius of circle:");
    scanf("%d",&radius);
    areaperi(radius,&area,&perimeter); //calling function
    printf("Area of circle is %f\n",area);
    printf("Perimeter of circle is %f\n",perimeter);
    return 0;
}

void areaperi(int r, float *a, float *p){ // function definition
    *a = 3.14*r*r;
    *p = 2*3.14*r;  


}