#include <iostream>
using namespace std;

class Employee {
    int id;
public:
    Employee(int i) : id(i) {}
    Employee(Employee &e) { id = e.id; }
    void show() { cout << id; }
};
int main() {
    Employee e1(101);
    Employee e2 = e1;
}