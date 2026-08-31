#include <iostream>
using namespace std;

class Numbers
{
private:
    int a[5];

public:
    void input()
    {
        for(int i = 0; i < 5; i++)
            cin >> a[i];
    }

    void reverse()
    {
        for(int i = 1; i <= 5; i++)
            cout << a[5-i] << " ";
    }
};

int main()
{
    Numbers a;
    a.input();
    a.reverse();
}