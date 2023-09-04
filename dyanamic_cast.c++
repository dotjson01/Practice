#include <iostream>
using namespace std;

class Animal {
    public:
        virtual void makeSound() {}
};

class Dog : public Animal {
    public:
        void makeSound() {
            cout << "Woof Woof!" << endl;
        }
};

class Cat : public Animal {
    public:
        void makeSound() {
            cout << "Meow Meow!" << endl;
        }
};

int main() {
    Animal* animalPtr = new Cat();
    
    Dog* dogPtr = dynamic_cast<Dog*>(animalPtr);
    if(dogPtr) {
        dogPtr->makeSound();
    } else {
        cout << "Failed to cast to Dog" << endl;
    }
    
    Cat* catPtr = dynamic_cast<Cat*>(animalPtr);
    if(catPtr) {
        catPtr->makeSound();
    } else {
        cout << "Failed to cast to Cat" << endl;
    }
    
    delete animalPtr;
    return 0;
}
