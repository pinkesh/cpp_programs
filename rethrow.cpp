#include <iostream>
#include <stdexcept>

using namespace std;

void databaseOperation()
{
    throw runtime_error("Database connection failed");
}

void service()
{
    try
    {
        databaseOperation();
    }
    catch (const runtime_error& e)
    {
        cout << "Service logged: "
             << e.what() << endl;

        throw e;   // Rethrow
    }

}

int main()
{
    try
    {
        service();

    }
    catch (const exception& e)
    {
        cout << "Main handled: "
             << e.what() << endl;
        
        
    }

    return 0;
}