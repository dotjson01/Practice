#include<iostream>
#include<vector>
using namespace std;

vector<bool> sieve(int n){ // function declared 
    // vector ka size = n+1 , aur unn sabka value true , baad mai false krdenge condition ke time
    vector<bool> isPrime(n+1, true); // assume kro saare prime number hai
    isPrime[0] = isPrime[1] = false; // 0 aur 1 ko false corz, yeh base case ke saath khud apne se divide hote hai

    // aab joh 1 se baade hai , 2 se start ho rhae hai || 2 ek number hai , jiski value abhi true hai
    for(int i=2;i<=n;i++){
        if(isPrime[i]) // if condition yeh bolta hai agar , main tabh hee execute krunga jaab mere andar se true pass hoga
        {
            for(int j = i; i*j<=n ; j++){  // i ki value upar for loop se aagyi , j mai chli gyi , aabh j increment ho rha hai +1
                isPrime[j*i] = false; // i constant hai , bass j increment ho rha hai , i ke multiples (i*2, i*3, i*4) ko false krdoh
            }
        }
    }
    return isPrime; 


}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(n<=0){                                      // phla base case -ve ke liye hit hona
        cout<<"Enter the Positive value"<<endl;            
    return n;
    };
    vector<bool>isPrime= sieve(n);                  // agar 2 ya 2 se upar hoga toh fun mai enter kro

    cout<<"Prime number of "<<n<<"are: ";
    for(int out = 2; out<=n ; out++){
        if(isPrime[out]){
            cout << out << " ";
        }
    }
    return 0;

    
}