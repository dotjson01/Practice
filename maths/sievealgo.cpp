#include<iostream>
#include<vector>
using namespace std;

vector<bool> sieve(int n){ // function declared 
    // vector ka size = n+1 , aur unn sabka value true , baad mai false krdenge condition ke time
    vector<bool> isPrime(n+1, true); // assume kro prime number hai starting mai
    isPrime[0] = isPrime[1] = false; // 0 aur 1 ko false corz, yeh base case ke saath khud apne se divide hote hai

    // aab joh 1 se baade hai , 2 se start ho rhae hai || 2 ek number hai , jiski value abhi true hai
    for(int i=2;i<=n;i++){
        if(isPrime[i]) // if condition yeh bolta hai agar , main tbh hee execute krunga jaab mere andar se true pass hoga
        {
            for(int j = i; i*j<=n ; j++){
                isPrime[j*i] = false;
            }
        }
    }
    return isPrime;


}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(n<0){
    cout<<"Enter the Positive number"<<endl;
    };
    vector<bool>isPrime= sieve(n);

    cout<<"Prime number of "<<n<<"are: ";
    for(int out = 2; out<=n ; out++){
        if(isPrime[out]){
            cout << out << " ";
        }
    }
    return 0;

    
}