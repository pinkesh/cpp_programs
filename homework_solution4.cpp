#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;

public:
    void setData(string n, int a)
    {
        name = n;
        age = a;
    }

    void show()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    Student s;
    s.setData("Rahul", 20);
    s.show();
}

// Not sure what the error is