#include <iostream>
using namespace std;

class Marks
{
private:
    int m[5];

public:
    Marks(int value)
    {
        for(int i = 0; i < 5; i++)
            m[i] = value;
    }

    void show()
    {
        for(int i = 0; i < 5; i++)
            cout << m[i] << " ";
    }
};

int main()
{
    Marks a(50);
    a.show();
}

// output: 50 50 50 50 50