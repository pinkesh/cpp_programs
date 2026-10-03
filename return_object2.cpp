#include <iostream>
using namespace std;

class Number
{
public:
    int value;

    Number add(Number n)
    {
        Number result;
        result.value = value + n.value;

        return result;   // Returning object
    }
};

int main()
{
    Number n1, n2, n3;

    n1.value = 10;
    n2.value = 20;

    n3 = n1.add(n2);

    cout << "Result = " << n3.value;

    return 0;
}