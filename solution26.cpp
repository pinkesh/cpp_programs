#include <iostream>
using namespace std;

class Data
{
    int a[5];
public:
    Data()
    {
        for(int i = 0; i < 5; i++)
            a[i] = i + 1;
    }

    void change(int *p)
    {
        for(int i = 0; i < 5; i++)
            p[i] = p[i] * 2;
    }

    void show()
    {
        for(int i = 0; i < 5; i++)
            cout << a[i] << " ";
    }

    int* getDataPointer(){
        return a;
    }
};

int main()
{
    Data d;
    d.change(d.getDataPointer());
    d.show();
}