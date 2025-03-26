#include <iostream>

using namespace std;

// void memoryLeakExample() {
//     int* ptr = new int(10);  // 🔥 Memory allocated but not freed (Memory Leak)
//     cout << "Memory Leak Example Running..." << endl;
// }

void memoryLeakExample() {
    int* ptr = new int(10);
    cout << "Memory Leak Fixed!" << endl;
    delete ptr;  // ✅ Memory freed
}

int main() {
    memoryLeakExample();  // 🚀 Running function with memory leak
    return 0;
}
