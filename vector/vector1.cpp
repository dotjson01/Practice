#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);

    arr.pop_back();

    for (int i = 0; i < arr.size(); i++) {
        std::cout << "Element pushed: " << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Total Elements: " << arr.size() << std::endl;
    std::cout << "Capacity of Vector: " << arr.capacity() << std::endl;

    std::vector<int> brr(10, 1);

    std::cout << "Size of brr: " << brr.size() << std::endl;
    std::cout << "Capacity of brr: " << brr.capacity() << std::endl;

    for (int i = 0; i < brr.size(); i++) {
        std::cout << brr[i] << " ";
    }
    std::cout << std::endl;

    int exitStatus = 0;
    std::cout << "Program exit status: " << exitStatus << std::endl;
    return exitStatus;
}