#include<bits/stdc++.h>
using namespace std;

int  add(int x,int y){
    return x+y;
}

int main(){
    int a=4,b=5;
    int c=add(a,b);
    cout<<c;
    return 0;
}

// In the first code, the parameters x and y are passed by value. This means that the function receives 
// copies of the original variables a and b, and any modifications made to x and y inside the function 
// do not affect the original variables.In the second code, the parameters x and y are passed by reference 
// using the & symbol. This means that the function receives the original variables a and b themselves,
//  and any modifications made to x and y inside the function directly affect the original variables.

// So, in the second code, the values of a and b may be modified by the add function, while in the
//  first code they will always remain unchanged.




#include<bits/stdc++.h>
using namespace std;

int  add(int x,int y){
    return x+y;
}

int main(){
    int a=4,b=5;
    int c=add(a,b);
    cout<<c;
    return 0;
}

