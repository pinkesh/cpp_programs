#include <iostream>
using namespace std;

class Person
{
public:
    void person()
    {
        cout << "Person" << endl;
    }
};

class Employee : public Person
{
public:
    void employee()
    {
        cout << "Employee" << endl;
    }
};

class Manager : public Employee
{
public:
    void manager()
    {
        cout << "Manager" << endl;
    }
};

int main()
{
    Manager m;

    m.person();
    m.employee();
    m.manager();

    return 0;
}