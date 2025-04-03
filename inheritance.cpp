#include <iostream>
using namespace std;

// Base class (Parent)
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class (Child) inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks: Woof! Woof!" << endl;
    }
};

int main() {
    Dog myDog;
    
    myDog.eat();  // Inherited from Animal
    myDog.bark(); // Defined in Dog

    return 0;
}
