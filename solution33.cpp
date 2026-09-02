#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int salary;

protected:
    string department;

public:
    Employee(int s, string d)
    {
        salary = s;
        department = d;
    }

    int* getSalary(){
        return &salary;
    }
};

class Manager : public Employee
{
public:
    Manager(int s, string d) : Employee(s, d)
    {
    }

    void show()
    {
        cout << *getSalary() << " " << department;
    }
};

int main()
{
    Manager m(50000, "IT");
    m.show();
}