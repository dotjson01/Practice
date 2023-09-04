// #include<bits/stdc++.h>
// using namespace std;

// void fun(int &x)
// {
//     x=x+5;

// }

// int main(){
//     int x=10;
//     fun(x);
//     cout<<x;
//     return 0;
// }


//both desired a same ouput 

#include<bits/stdc++.h>
using namespace std;

void fun(int *x)
{
    *x=*x+5;

}

int main(){
    int x=10;
    fun(&x);
    cout<<x;
    return 0;
}