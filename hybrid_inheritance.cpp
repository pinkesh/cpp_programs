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

class Student : public Person
{
public:
    void student()
    {
        cout << "Student" << endl;
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

class Intern : public Student, public Employee
{
public:
    void intern()
    {
        cout << "Intern" << endl;
    }
};

int main()
{
    Intern i;

    i.intern();

    return 0;
}