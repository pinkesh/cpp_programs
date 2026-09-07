#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
};

int main()
{
    Student s1;
    Student s2;

    s1.name = "Rahul";
    s2.name = "Amit";

    cout << s1.name << endl;
    cout << s2.name << endl;

    return 0;
}

//Every object gets its own name