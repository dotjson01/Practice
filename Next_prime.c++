// #include<bits/stdc++.h>
// using namespace std;

// int nextPrime(int n){
//     n++;
//     while(true){
//         int i;
//         for(i=2;i<n;i++){
//             if(n%i==0)
//             break;
//         }
//         if(i==n)
//         return n;
//         n++;
        
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<nextPrime(n);
//     return 0;

// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
    for(i=5;i>0;i--){
        cout<<i ;
        if(i==3)
        break;
    }
    return 0;
}