#include <iostream>
using namespace std;

class CountObj{
    static int count;
    
    public:
        CountObj(){
            count++;
        }

        static void displayCount(){
            cout << count;
        }
};

int CountObj::count = 0;

int main(){
    CountObj a;
    CountObj b;
    CountObj c;
    CountObj::displayCount();
    return 0;
}