#include <iostream>
using namespace std;

class Numbers
{
private:
    int a[5];

public:
    int* getNumbers(){
        return a;
    }

    void input()
    {
        for(int i = 0; i < 5; i++)
            cin >> a[i];
    }

    void update(int *p)
    {
        for(int i = 0; i < 5; i++)
            p[i] = p[i] + 5;
    }

    void show()
    {
        for(int i = 0; i < 5; i++)
            cout << a[i] << " ";
    }
};

int main()
{
    Numbers n;
    n.input();
    n.update(n.getNumbers());
    n.show();
}