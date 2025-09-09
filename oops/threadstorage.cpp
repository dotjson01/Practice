#include <iostream>
#include <thread>
using namespace std;

thread_local int myVar = 0; // Thread-local variable

void threadFunction() {
    myVar++;
    cout << "Thread ID: " << this_thread::get_id() << ", myVar: " << myVar << endl;
}

int main() {
    thread t1(threadFunction);
    thread t2(threadFunction);
    t1.join();
    t2.join();
    return 0;
}