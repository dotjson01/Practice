#include<stdio.h> 

int leap_year(int);

int main(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    leap_year(year);
    return 0;

}
int leap_year(int year){
    if(year%4==0){
        printf("The year is a leap year");
    }
    else{
        printf("The year is not a leap year");
    }
    return year;
}