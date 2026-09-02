#include <iostream>
using namespace std;

class Employee
{
private:
    string name;

public:
    void setName(string n)
    {
        name = n;
    }

    void show()
    {
        cout << name;
    }
};

int main()
{
    Employee e;
    e.setName("Amit");
    e.show();
}