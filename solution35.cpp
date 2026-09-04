#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    static int total;

protected:
    int id;

public:
    Employee(string n, int i) : name(n), id(i) {
        total++;
    }

    virtual void work() = 0;

    static void showTotal() {
        cout << "Total: " << total << endl;
    }

    void showName() {
        cout << name << endl;
    }
};

int Employee::total = 0;

class Developer : public Employee {
public:
    Developer(string n, int i) : Employee(n, i) {}

    void work() override {
        cout << "Developer " << id << endl;
    }
};

class Tester : public Employee {
public:
    Tester(string n, int i) : Employee(n, i) {}

    void work() override {
        cout << "Tester " << id << endl;
    }
};

int main() {
    Developer d("Amit", 101);
    Tester t("Neha", 102);

    Employee* e1 = &d;
    Employee* e2 = &t;

    e1->work();
    e2->work();

    Employee::showTotal();

    d.showName();
    t.showName();

    return 0;
}

//Developer 101
//Tester 102
//Total: 2
//Amit
//Neha

//1: showTotal is static
//2: the work function is virtual and = 0
//3: they are override functions
//4: privates are name and total, id is protected, however methods are all public
