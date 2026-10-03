#include <iostream>
using namespace std;

class Person
{
    
public:
    int id=99;
    void person()
    {
        cout << "Person" << endl;
    }
};

class Student :  virtual public Person
{
public:
    void student()
    {
        cout << "Student" << endl;
    }
};

class Employee :  virtual public Person
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
    i.employee();
    i.student();
    cout << "ID: " << i.id << endl;

    return 0;
}