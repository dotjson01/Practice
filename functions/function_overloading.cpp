#include<iostream>
using namespace std;
// Function overloading allows you to create multiple functions with the same name but different parameters. Here's a simple real-life


int add(int a,int b,int c){
    return a+b+c;
}

int add(int a,int b, int c, int d){
    return a+b+c+d;
}
int main(){
    int a,b,c,d;
    std::cout<<"Enter the numbers"<<endl;
    std::cin>>a>>b>>c>>d;

    int first = add(a,b,c);
    int second = add(a,b,c,d);

    std::cout<<"First Addition "<<first<<std::endl<<" Second Addition "<<second<<endl;
    return 0;
}