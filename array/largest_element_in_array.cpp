#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int main(){

    int stored_largest = INT_MIN ;                            // - 2^n to 2^n-1  - 1 
    int stored_smallest = INT_MAX;                            // 2^n-1  -1 to 2^n

    vector<int> element = { 21, 43, 102, 65, 50, 2, 100 };
    cout<<"Vector Size "<<element.size()<<endl;
    cout<<"Before Implementation "<<endl;

    for(int i = 0 ; i < element.size(); i++){
        cout<<i<<" at "<<element[i]<<endl;
    }
    cout<<"After Implementation Finding largest value in a element "<<endl;

    for(int i=0 ; i<element.size() ; i++){
        if(element[i] > stored_largest){
            stored_largest = element[i];
        }
        if(element[i] < stored_smallest){
            stored_smallest  = element[i] ;
        }
    }

    cout<<stored_largest<<endl;
    cout<<stored_smallest<<endl;
}