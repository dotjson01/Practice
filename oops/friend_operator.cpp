#include <iostream>             // (1) Input/Output stream include kiya
using namespace std;           // (2) Standard namespace use kiya, taaki cout/cin direct use ho

// 💡 Class Definition Start
class Complex {
private:
    int real, img;             // (3) Do private variables: real & imaginary part

public:
    Complex(int r = 0, int i = 0) {  // (4) Constructor with default arguments
        real = r;                    // (5) real set ho gaya
        img = i;                     // (6) img set ho gaya
    }

    void display() {                // (7) Function to print complex number
        cout << real << " + i" << img << endl;  // (8) Complex number format mein print
    }

    // 👇 Friend function declaration (access to private members)
    friend Complex operator+(Complex c1, Complex c2);  // (9) '+' operator overload ki declaration
};

// ✅ Friend function ka definition class ke bahar
Complex operator+(Complex c1, Complex c2) {
    Complex temp;                 // (10) Ek temporary object banaya
    temp.real = c1.real + c2.real;  // (11) dono objects ke real parts add kiye
    temp.img  = c1.img + c2.img;    // (12) dono ke img parts add kiye
    return temp;                  // (13) temp object return kiya
}

// 💡 Main function start
int main() {
    Complex c1(10, 5),            // (14) c1 object: real = 10, img = 5
            c2(3, 4),             // (15) c2 object: real = 3, img = 4
            c3;                   // (16) c3 object: default constructor call → real = 0, img = 0

    c3 = c1 + c2;                 // (17) '+' operator call → operator+(c1, c2)
                                  //      returns object with real = 13, img = 9
                                  //      assigns to c3

    c3.display();                 // (18) c3 ka display function call → prints: 13 + i9

    // operator+(c1, c2);         // (optional comment): ye bhi chal jaata
}
