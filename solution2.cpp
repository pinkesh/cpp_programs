#include <iostream>
using namespace std;

class Employee {
public:
    int salary;

public:
    void setSalary(int s) {
        salary = s;
    }
};

int main() {
    Employee e;
    e.salary = 50000;
    return 0;
}

//change salary to public