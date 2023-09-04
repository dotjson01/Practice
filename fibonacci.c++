/* 

#include<bits/stdc++.h>
using namespace std;

long long fib[100];

long long fibonacci(long long n) {
if (fib[n] != -1) return fib[n];
if (n == 1) return fib[n] = 0;
if (n == 2) return fib[n] = 1;
return fib[n] = fibonacci(n-1) + fibonacci(n-2);
}

int main() {
long long n;
cin >> n;
memset(fib, -1, sizeof(fib));
cout << fibonacci(n) << endl;
return 0;
}


 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=1,b=1,c=0;
    cout<<" 1 1";
    for(int i=2;i<n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}