#include <iostream>
using namespace std;

int *getNumber() {
    static int num = 42;  // Static memory mein store hoga
    return &num;          // num ka address return ho raha hai
}

int main() {
    int *ptr = getNumber();  // ptr mein num ka address store ho raha hai
    cout << "Value: " << *ptr << endl;  // Pointer dereference kar ke value print karenge
    return 0;
}


/*✅ Waiter tumhe table ka number bata deta hai aur kehta hai:
👉 "Aapka order Table No. 5 par rakha hai, jaake khud le lo."

🔹 Yaha pe waiter address (table no. 5) de raha hai, aur tumhe khud jaake order lena padega.
🔹 Agar table delete ho gaya ya koi aur baith gaya, toh tumhe problem ho sakti hai (Dangling Pointer).
*/