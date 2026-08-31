#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int marks[3];
    int total;

protected:
    int rollNo;

public:
    string getName(){
        return name;
    }

    Student(string n, int r)
    {
        name = n;
        rollNo = r;
        total = 0;
    }

    void input()
    {
        for(int i = 0; i <= 3; i++)
        {
            cin >> marks[i];
            total += marks[i];
        }
    }

    void change(int x)
    {
        total = x;
    }

    void changeByPointer(int *x)
    {
        *x = *x + 10;
        total = *x;
    }

    void show()
    {
        cout << name << " " << rollNo << " " << total << endl;
    }
};

class Result : public Student
{
public:
    Result(string n, int r) : Student(n, r)
    {
    }

    void update()
    {
        cout << getName() << endl;
        cout << rollNo << endl;
    }
};

int main()
{
    Student s("Amit", 10);
    s.input();

    int x = 50;
    s.change(x);
    s.changeByPointer(&x);

    s.show();
}

// 1: made a getter for name
// 2: changeByPointer gives address of x
// 3: made total = *x