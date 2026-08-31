#include <iostream>
using namespace std;

class Employee
{
    string name;

public:
    Employee(string n)
    {
        name = n;
    }

    void change(string newName)
    {
        name = newName;
        //*p = "Updated";
    }

    void show()
    {
        cout << name;
    }
};

int main()
{
    Employee e("Original");
    e.change("Updated");
    e.show();
}