#include <iostream>
using namespace std;

class Employee {
    static int count;
    int id;
public:
    Employee(int i) {
        id = i;
        count++;
    }
    static void showCount() {
        cout << count;
    }
};
int Employee::count = 0;
int main() {
    Employee e1(1);
    Employee::showCount();
}