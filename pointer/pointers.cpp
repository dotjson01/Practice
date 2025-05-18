#include<iostream>
using namespace std;


int maxi(int x,int y,int z){
    if(x>y && x>z){
        return x;
    }
    else if(y>z){
        return y;
    }
    else
    return z;
}
int main(){
    int a, b ,c;
    std::cout<<"Enter the Numbers : "<<std::endl;
    std::cin>>a>>b>>c;

    int max =  maxi(a,b,c);
    std::cout<<"The maximum number is "<<max<<std::endl;

    return 0;
}