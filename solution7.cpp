#include <iostream>
using namespace std;

class Student{
    private:
        int number;
        int mark;
    
    public:
        Student(int n, int m){
            number = n;
            mark = m;
        }

        void display(){
            cout << number << " ";
            cout << mark << "\n";    
        }
};

int main(){
    
    Student students[5] = {
        Student(1, 85),
        Student(2, 90),
        Student(3, 97),
        Student(4, 83),
        Student(5, 50)
    };

    for(Student s: students){
        s.display();
    }
    return 0;
}