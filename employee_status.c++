#include <iostream>
#include <string>

using namespace std;

// Define the Employee structure
struct Employee {
    string name;
    int age;
    string position;
    double salary;
};

int main() {
    // Create an instance of Employee for Sahil
    Employee sahil;
    sahil.name = "Sahil";
    sahil.age = 30;
    sahil.position = "Manager";
    sahil.salary = 50000.0;

    // Create another instance of Employee for Maria
    Employee maria;
    maria.name = "Maria";
    maria.age = 25;
    maria.position = "Assistant";
    maria.salary = 30000.0;

    // Print out the data for each employee
    cout << "Employee 1: " << sahil.name << ", " << sahil.age << ", " << sahil.position << ", " << sahil.salary << endl;
    cout << "Employee 2: " << maria.name << ", " << maria.age << ", " << maria.position << ", " << maria.salary << endl;

    return 0;
}
