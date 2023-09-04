#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int age;
    string position;
    double salary;
};

int main() {
    const int NUM_EMPLOYEES = 300;
    Employee employees[NUM_EMPLOYEES];

    // Prompt the user to enter data for each employee
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "Enter data for employee " << i+1 << ":\n";
        cout << "Name: ";
        getline(cin, employees[i].name);
        cout << "Age: ";
        cin >> employees[i].age;
        cin.ignore(); // Ignore the newline character left by cin
        cout << "Position: ";
        getline(cin, employees[i].position);
        cout << "Salary: ";
        cin >> employees[i].salary;
        cin.ignore(); // Ignore the newline character left by cin
    }

    // Print out the data for each employee
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "Employee " << i+1 << ":\n";
        cout << "Name: " << employees[i].name << endl;
        cout << "Age: " << employees[i].age << endl;
        cout << "Position: " << employees[i].position << endl;
        cout << "Salary: " << employees[i].salary << endl;
    }

    return 0;
}
