#include<iostream>
using namespace std;

string *getOrderByReference(){
    static string order = "Burger";
    return &order;
}

int main(){
    string *myorder = getOrderByReference();
    cout<<"Your Order is: "<<*myorder<<endl;
    return 0;
}








/*
✅ Waiter directly tumhare table par order rakh deta hai aur kehta hai:
👉 "Yeh lo, aapka order yahin rakha hai."

🔹 Yaha pe waiter order ka reference (alias) de raha hai, jo same jagah pe rehega bina address diye.
🔹 Tum bina koi extra kaam kiye direct khana kha sakte ho, bina kisi * dereferencing ke.
*/