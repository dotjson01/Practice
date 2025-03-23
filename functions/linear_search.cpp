#include<iostream>


int fun(int A[],int n,int target){
    for(int i = 0;i<n;i++)
        if(target == A[i])
            return i;
            return 0;
}

int main(){
    int A[8] = {21,32,43,54,65,76,87,90};
    int target;
    std::cout<<"Enter the Element you want to find"<<std::endl;
    std::cin>>target;

    int i = fun(A,8,target);
    std::cout<<"Element Found at index"<<i<<std::endl;

}