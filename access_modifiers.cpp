#include <iostream>
using namespace std;

class Item
{
private:
    int number;          // private member
    float cost;          // private member

protected:
    int quantity;        // protected member

public:
    string name;         // public member

    // Member function defined inside the class
    void setData(int n, float c, int q)
    {
        number = n;      // private: can be accessed here
        cost = c;        // private: can be accessed here
        quantity = q;    // protected: can be accessed here
    }

    // Member function declaration
    void putData();
};

// Member function definition outside the class
void Item::putData()
{
    cout << "Number   : " << number << "\n";
    cout << "Cost     : " << cost << "\n";
    cout << "Quantity : " << quantity << "\n";
    cout << "Name     : " << name << "\n";
}


// Derived class
class NewItem : public Item
{
public:
    void showQuantity()
    {
        // Protected member can be accessed in derived class
        cout << "Quantity from derived class: "
             << quantity << "\n";

        // Public member can also be accessed
        cout << "Name from derived class: "
             << name << "\n";

        // number and cost cannot be accessed here
        // because they are private
    }
};


// Main Program
int main()
{
    Item x;                  // create object x

    // Public member can be accessed directly
    x.name = "Laptop";

    // Private and protected members cannot be accessed directly
    // x.number = 100;       // ERROR
    // x.cost = 299.95;      // ERROR
    // x.quantity = 5;       // ERROR

    // Access private/protected members through public function
    x.setData(100, 299.95, 5);

    cout << "\nObject x\n";
    x.putData();


    NewItem y;               // create another object

    y.name = "Keyboard";     // public member

    y.setData(200, 175.50, 10);

    cout << "\nObject y\n";
    y.putData();

    cout << "\nAccessing protected member through derived class\n";
    y.showQuantity();

    return 0;
}