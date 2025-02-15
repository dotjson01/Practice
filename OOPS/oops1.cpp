#include <iostream>
#include <string>

class Teacher {
private:
    double salary;
    std::string name;
    std::string department;
    std::string subjects;

public:
    // Default constructor
    Teacher() {
        name = "";
        department = "CSE";
        subjects = "";
        salary = 0.0;
    }

    // Parameterized constructor
    Teacher(std::string n, std::string dept, std::string sub, double s) {
        name = n;
        department = dept;
        subjects = sub;
        salary = s;
    }

    void getInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Department: " << department << std::endl;
        std::cout << "Subject: " << subjects << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main() {
    // Note: Salary should be passed as a double, not a string
    Teacher t1("Sahil", "CSE", "EVS", 20000.0);
    t1.getInfo();

    return 0;
}