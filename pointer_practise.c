// This means that the function receives a copy of each variable, 
// not the original variable itself. So when you modify i and j inside
//  the fun function, you are only modifying the copies, not the original 
//  variables i and j in the main function.

#include<stdio.h>

void fun (int , int );
int main(){
    int i=5,j=2;
    fun(i,j);
    printf("%d %d\n",i,j);
    return 0;
}
void fun (int i, int j){
    i=i*i;
    j=j*j;
}

// The output of the above code will be 5 2.


// To achieve the desired output, you need to pass the variables by reference, 
// not by value. In C, this is done using pointers. Here's how you can modify your code:

// #include<stdio.h>

// void fun (int* , int* );
// int main(){
//     int i=5,j=2;
//     fun(&i,&j);
//     printf("%d %d\n",i,j);
//     return 0;
// }
// void fun (int* i, int* j){
//     *i = (*i) * (*i);
//     *j = (*j) * (*j);
// }

// The output of the above code will be 25 4.