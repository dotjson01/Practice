#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr;
    std::cout << "Initial capacity: " << arr.capacity() << std::endl;
    
    arr.push_back(1);
    std::cout << "After 1st: " << arr.capacity() << std::endl;
    
    arr.push_back(2);
    std::cout << "After 2nd: " << arr.capacity() << std::endl;
    
    arr.push_back(3);
    std::cout << "After 3rd: " << arr.capacity() << std::endl;
    
    arr.push_back(4);
    std::cout << "After 4th: " << arr.capacity() << std::endl;
    
    int ans = arr.capacity() * sizeof(int);
    std::cout << "Total bytes: " << ans << std::endl;
    return 0;
}