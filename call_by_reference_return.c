#include<stdio.h>

 void area_perimeter(int, float *, float *);

int main(){
    int radius;
    float area, perimeter;
    printf("Enter radius of a circle");
    scanf("%d", &radius);
    area_perimeter(radius, &area, &perimeter);
    printf("Area of circle is %f\n", area);
    printf("Perimeter of circle is %f\n", perimeter);
    // return;
}

void area_perimeter(int r, float *a, float *p) {
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
}

