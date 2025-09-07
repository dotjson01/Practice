#include<iostream>
using namespace std;

int main(){
int arr[5] = {1, 2, 3, 4, 5};

cout<<&arr<<endl;
int *p = arr; // p ab arr ke pehle element ka address rakhta hai
cout << p <<endl;   // Output: 1
p++;          // p ab doosre element (arr[1]) ko point karta hai
cout << p<<endl;
p++;          // p ab doosre element (arr[1]) ko point karta hai
cout << p<<endl;
p++;          // p ab doosre element (arr[1]) ko point karta hai
cout << p<<endl;

return 0;
}


