#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int main(){

    vector<int> element = { 21, 43, 102, 65, 50, 2, 100 };
    cout<<"Vector Size "<<element.size()<<endl;
    for(int i = 0 ; i < element.size(); i++){
        cout<<i<<" at "<<element[i]<<endl;
    }
}