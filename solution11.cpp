#include <iostream>
using namespace std;

class Person {
private:
    string name;

public:
    Person(string n) {
        name = n;
    }

    void show() {
        cout << name;
    }
};

class Student : public Person {
public:
    Student(string n) : Person(n) {
        //name = n;
    }
};

int main() {
    Student s("Amit");
    s.show();
    return 0;
}