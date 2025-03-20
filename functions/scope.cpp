#include<iostream>
using namespace std;

int main(){
    int x=10;
    {
        int x=20;
        {
            int x=30;
            {
                int x=40;
                cout<<x<<endl;
            }
            cout<<x<<endl;
        }
        cout<<x<<endl;
    }
    cout<<x<<endl;
    return 0;
}