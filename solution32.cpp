#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark";
    }
};

int main() {
    Animal* a = new Dog();
    a->sound();
    delete a;
    return 0;
}

//output: Bark
// Animal is an abstract class, using a pointer just makes an address which can work