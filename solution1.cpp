#include <iostream>
using namespace std;

class Student {
public:
    string name;

    void show() {
        cout << name << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Rahul";
    s1.show();

    return 0;
}

// Rahul