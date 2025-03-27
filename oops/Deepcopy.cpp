// #include <iostream>
// using namespace std;

// class Shallow {
// public:
//     int* data;

//     // Constructor
//     Shallow(int val) {
//         data = new int(val);  // 🔥 Dynamic Memory Allocation
//     }

//     // Default Copy Constructor (Shallow Copy)
//     Shallow(const Shallow& obj) {
//         data = obj.data;  // ❌ Only copying the pointer reference (Not deep copy)
//     }

//     void display() {
//         cout << "Value: " << *data << endl;
//     }
// };

// int main() {
//     Shallow obj1(10);
//     Shallow obj2 = obj1;  // ❌ Shallow Copy

//     obj2.display();  // ✅ Output: 10

//     delete obj1.data;  // 🔥 Freeing memory, but obj2 is still using the same memory!

//     obj2.display();  // ❌ Undefined Behavior (Dangling Pointer)
// }

/*
Output: 
obj1.data  → [ 10 ]  ← obj2.data (Both pointing to same memory)
*/

/*Solution: Deep Copy Constructor

🔹 Deep Copy constructor har object ke liye naya memory allocate karta hai, taaki koi memory sharing na ho.
🔹 Har object ka apna independent memory block hota hai, toh koi memory corruption nahi hoti.
*/

#include <iostream>
using namespace std;

class Deep {
public:
    int* data;

    // Constructor
    Deep(int val) {
        data = new int(val);  // ✅ Dynamic Memory Allocation
    }

    // ✅ Deep Copy Constructor (Allocating New Memory)
    Deep(const Deep& obj) {
        data = new int(*obj.data);  // ✅ Separate Memory for Each Object
    }

    void display() {
        cout << "Value: " << *data << endl;
    }

    // ✅ Destructor (Prevents Double Free)
    ~Deep() {
        if (data != nullptr) {
            delete data;
            data = nullptr;  // ✅ Set to NULL after deletion
        }
    }
};

int main() {
    Deep obj1(10);
    Deep obj2 = obj1;  // ✅ Deep Copy Constructor is called

    obj1.display();
    obj2.display();

    return 0;  // ✅ No double delete error now!
}


/*
Output: 
obj1.data  → [ 10 ]  
obj2.data  → [ 10 ]  (Separate copy in new memory)
*/