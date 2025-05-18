#include <iostream>
using namespace std;

class Base
{
public:
    
        void fun()
        {
            cout << "fun of base" << endl;
        }

};

class Derived : public Base
{
public:
    
        void fun()
        {
            cout << "fun of derived" << endl;
        }
    
};

int main()
{

    Derived d;
    d.fun();
}