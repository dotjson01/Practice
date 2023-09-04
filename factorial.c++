// #include<bits/stdc++.h>
// using namespace std;

// int factorial(int n)
// {
//     return (n==1|| n==0)?1:n*factorial(n-1);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<""
//         }
//     }
// }


// int main(){
//     int n;
//     cin>>n;
//     cout<<"Factorial of "<<n<<" is "<<factorial(n);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans;
    ans=1;
    while(n>0){
        ans*=n;
        n--;
    
    }
    cout<<ans;
    return 0;
}