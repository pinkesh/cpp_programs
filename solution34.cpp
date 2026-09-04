#include <iostream>
using namespace std;

class Employee {
private:
    static string name;
    static int count;

public:
    static void addEmployee(string n) {
        name = n;
        count++;
    }

    void show() {
        cout << name << " " << count;
    }
    
    string* getNameAddress(){
        return &name;
    }
};

string Employee::name = "";
int Employee::count = 0;

class Manager : public Employee {
public:
    void changeName() {
        *getNameAddress() = "Manager";
    }
};

int main() {
    Employee::addEmployee("Rahul");
    Manager m;
    m.changeName();
    m.show();
    return 0;
}