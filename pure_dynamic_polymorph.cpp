#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Circle : public Shape
{
public:
    void area()
    {
        cout << "Circle area" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area()
    {
        cout << "Rectangle area" << endl;
    }
};

void showArea(Shape& s)
{
    s.area();
}

int main()
{
    Circle c;
    Rectangle r;

    showArea(c);
    showArea(r);

    return 0;
}