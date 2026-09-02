#include <iostream>
using namespace std;

class Customer
{
    string name;
    int id;

public:
    Customer(string n, int i)
    {
        name = n;
        id = i;
    }

    void show()
    {
        cout << name << " " << id;
    }
};

int main()
{
    Customer c("Raj Patel", 1234);
    c.show();
}