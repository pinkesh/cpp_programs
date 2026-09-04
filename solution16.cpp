#include <iostream>
using namespace std;

class Employee {
public:
    static int count;

    Employee() {
        count++;
    }

    static void showCount() {
        cout << count << endl;
    }
};

int Employee::count = 0;

int main() {
    Employee e1;
    Employee e2;
    Employee::showCount();

    Employee e3;
    e3.showCount();

    return 0;
}
// output 2\n3
// works because when method is set to static, it can be called with or without an object
