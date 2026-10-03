#include <iostream>
#include <exception>

using namespace std;

class BrandonException : public exception
{
public:
    const char* what() const throw() override
    {
        return "Its my error";
    }
};

int main()
{
    int age = -10;

    try
    {
        if (age < 0)
        {
            throw BrandonException();
        }

        cout << "Valid age" << endl;
    }
    catch (const BrandonException& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}