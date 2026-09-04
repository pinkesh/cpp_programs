#include <iostream>
using namespace std;

class Sample {
    int *p;
public:
    Sample(int x) {
        p = new int;
        *p = x;
    }
    Sample(const Sample &s) {
        p = s.p;
    }
    ~Sample() {
        delete p;
    }
};
int main() {
    Sample a(10);
    Sample b = a;
}