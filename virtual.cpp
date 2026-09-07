#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Cat meows" << endl;
    }
};

void makeSound(Animal& animal)
{
    animal.sound();
}

int main()
{
    Animal a;
    Dog d;
    Cat c;
    
    makeSound(a);
    // makeSound(d);
    // makeSound(c);
    

    return 0;
}