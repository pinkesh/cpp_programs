#include <iostream>
using namespace std;

class Student
{
    int age;

public:

    // 1. Default Constructor
    Student()
    {
        age = 18;
        cout << "Default Constructor Called" << endl;
    }

    // 2. Parameterized Constructor
    Student(int a)
    {
        age = a;
        cout << "Parameterized Constructor Called" << endl;
    }
    

    // 3. Copy Constructor
    // Student(Student &obj)
    // {
    //     age = obj.age;
    //     cout << "Copy Constructor Called" << endl;
    // }

    // 4. Destructor
    ~Student()
    {
        cout << "Destructor Called for Student with age "
             << age << endl;
    }

    void display()
    {
        cout << "Age = " << age << endl;
    }
};

int main()
{
    // Default constructor
    Student s1;
    s1.display();

    cout << endl;

    // Parameterized constructor
    Student s2(25);
    s2.display();

    cout << endl;

    // Copy constructor
    Student s3(s2);
    s3.display();

    cout << endl;

    return 0;
}