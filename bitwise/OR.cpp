#include<iostream>
using namespace std;

int main(){
    int a = 40;
    int b = 0;
    int m = (a||b);
    cout<< "The values"<<m <<endl;
    return 0;
}


/*

✔ Logical OR bas true/false check karta hai.
✔ Rule:

Agar dono zero → result = 0 (false)
Agar ek bhi non-zero → result = 1 (true)
👉 Output sirf 0 ya 1 hota hai.


*/