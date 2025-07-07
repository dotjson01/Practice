#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}

// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=5;j>=i;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// OUTPUT
// 54321
// 5432
// 543
// 54
// 5


// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=5;j>=i;j--){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

// OUTPUT
// 11111
// 2222
// 333
// 44
// 5 