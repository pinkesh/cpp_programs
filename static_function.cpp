#include <iostream>
using namespace std;

class Student
{
public:
    static int count;

    static void showCount()
    {
        cout << "Count = " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1;
    Student s2;

    s1.count = 100;

    Student::showCount();

    s2.count = 200;

    Student::showCount();

    return 0;
}