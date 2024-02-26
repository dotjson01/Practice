#include<stdio.h>
#include<math.h>

void stats(int *, double *, double *);

int main(){
    int sum;
    double avg, std_dev;
    stats(&sum, &avg, &std_dev);
    printf("Sum = %d\n", sum);
    printf("Average = %lf\n", avg);
    printf("Standard Deviation = %lf\n", std_dev);
    return 0;

}

void stats(int *s, double *a, double *sd){
    int n1, n2,n3,n4,n5;
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    *s = n1+n2+n3+n4+n5;
    *a = (double)(*s)/5;
    *sd = sqrt((pow(n1-*a,2)+pow(n2-*a,2)+pow(n3-*a,2)+pow(n4-*a,2)+pow(n5-*a,2))/4);
    return;
    
}
// what is space and run time complexity of this program?
// Space complexity is O(1) and run time complexity is O(1) because the number of inputs is fixed and the number of operations is also fixed.