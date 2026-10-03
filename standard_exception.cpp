#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    try
    {
        int age = 200;

        if (age < 0)
        {
            throw invalid_argument("Age cannot be negative");
        }
        else if (age > 100)
        {
            throw length_error("Age cannot be greater than 100");
        }
        
            cout << "Age: " << age << endl;
        
    }
    catch (const exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }
    catch (const invalid_argument e)
    {
        cout << "123Error: " << e.what() << endl;
    }
    catch (const length_error e)
    {
        cout << "234Error: " << e.what() << endl;
    }
    
    return 0;
}