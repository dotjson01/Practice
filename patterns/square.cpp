#include<iostream>
using namespace std;

int main(){
    int n =7 ;
    for (int i=1;i<=n;i++){ //rows : runs once per output row each, each iteration begins a new line
        for(int j=1;j<=n;j++){ // columns: runs inside the current outer iteration to print characters for the current row
            // it repeats printing stars till n 
            // condition break 
            // loop ended
            cout<<"*";
        }
        // fall out and print new line 
        cout<<endl;
    }
    // again goes to outer loop because it doesn't ended yet till n 
    // now i = 2, loop runs , condition check 
    // fall into j loop 
    //j=1 to j <= n runs again 
    // print star
}