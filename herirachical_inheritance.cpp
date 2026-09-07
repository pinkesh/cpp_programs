#include <iostream>
using namespace std;

class Shape
{
public:
    void display()
    {
        cout << "This is a shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void circle()
    {
        cout << "This is a circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void rectangle()
    {
        cout << "This is a rectangle" << endl;
    }
};

class Triangle : public Shape
{
public:
    void triangle()
    {
        cout << "This is a triangle" << endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;
    Triangle t;

    c.display();
    c.circle();

    r.display();
    r.rectangle();

    t.display();
    t.triangle();

    return 0;
}