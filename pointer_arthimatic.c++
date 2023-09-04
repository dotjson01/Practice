// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[]={10,20,30};
//     int *ptr=arr;
//     cout<<*ptr<<" "<<ptr<<endl;
//     ptr++;
//     cout<<*ptr<<" "<<ptr<<endl;
//     ptr--;
//     cout<<*ptr<<" "<<ptr<<endl;
//     return 0;

// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={10,20,30};
    int *ptr=arr;
    cout<<*ptr<<" "<<ptr<<endl;
    ptr=ptr+3;
    cout<<*ptr<<" "<<ptr<<endl;
    ptr= ptr-2;
    cout<<*ptr<<" "<<ptr<<endl;
    return 0;

}