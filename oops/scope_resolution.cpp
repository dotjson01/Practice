/*
Socho ek Sharma family me do Rahul Sharma hain: 
1️⃣ Ek Rahul Sharma (Father)
2️⃣ Ek Rahul Sharma (Son)

Agar koi Rahul Sharma ko bulaaye, toh kaise pata chalega ki kaunse wale ko bula rahe ho?
👉 Tabhi extra identification dena zaroori hota hai, jaise:

    "Rahul Sharma (Father)"

    "Rahul Sharma (Son)"

🔹 C++ me bhi agar multiple scopes me same naam ke variables/functions ho, toh :: use karke specify karte hain ki kaunsa wala use karna hai.
*/

#include<iostream>
using namespace std;

int x= 10;

int main(){
    int x=2;
    cout<<x<<endl;
    cout<<::x<<endl; //scope resolution used ::

}