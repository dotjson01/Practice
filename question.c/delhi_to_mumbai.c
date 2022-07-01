#include<stdio.h>

int main(){
    float distance,meter,centimeter,feet,inches;
    printf("\nenter the distance from delhi to mumbai in km\n");
    scanf("%f",&distance); //input disatnce
    //in meter
    meter=(1000*distance);
    printf("\nIn meter %f",meter);
    
    //in feet 
    feet=(3280.84*distance);
    printf("\n In feet %f",feet);

    //in inches 
    inches=(39370.1*distance);
    printf("\n In inches %f",inches);

    //in centimeter 
    centimeter=(100000*distance);
    printf("\n In centimeter %f",centimeter);
    return 0;
}