#include<iostream>
using namespace std;

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }



// what if you use n here


void fun(int n){
    for ( int i = 0 ; i < n ; i ++){ // this is basically inner loop
        // this is basically outer loop
    for ( int j = 0; j < n;j++){
        cout<<" * " ;
    }
    cout<<endl;

    }
}

int main (){
    int n;
    cout<<" Enter the Lines you want to print ";
    cin >> n ;
    fun(n);
}