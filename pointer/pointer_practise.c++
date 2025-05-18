#include<iostream>

int main(){
    int arr[]={10,20,30,40};
    int *ptr=arr;
    std::cout<<sizeof(arr)<<std::endl;
    std::cout<<sizeof(ptr)<<std::endl;
    return 0;
}