#include<iostream>

struct Data {
    int a;
    char b;
    double c; 
};
int main(){
    size_t naturalAlignment = alignof(Data);
    Data data alignas(16);
    std :: cout << "Natural alignment of  data"<<naturalAlignment << "bytes\n";
    std :: cout << "Specific alignment of data"<< alignof(data) << "bytes\n";
    return 0;
}