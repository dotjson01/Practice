#include<iostream>
int main(){
    int a[5] = {31,52,63,24,75};
    int max = a[0]; //starting

    for(int i = 1; i<5;i++){
        if(a[i]>max){
            max= a[i];
        }
    }
    std::cout<<"Maxium Value is "<<max<<std::endl;
    return 0;
}