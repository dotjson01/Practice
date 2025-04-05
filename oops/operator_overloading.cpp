#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    void display()
    {
        cout << real << " + i" << img << endl;
    }

    // ✅ Correct operator overloading
    Complex operator + (Complex c)
    {
        Complex temp;
        temp.real = real + c.real;  // ❌ You had written c1.real, which is not defined
        temp.img = img + c.img;
        return temp;
    }
};

int main()
{
    Complex c1(5, 3), c2(10, 5), c3;
    c3 = c1 + c2;   // ✅ Calls overloaded `+` operator
    c3.display();   // Output: 15 + i8
}
