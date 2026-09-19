#include <iostream>
#include <stdexcept>
#include <new>
#include <typeinfo>

using namespace std;

int main()
{
    try
    {
        throw invalid_argument("Invalid argument");
    }
    catch (const exception& e)
    {
        cout << "invalid_argument: "
             << e.what() << endl;
    }


    try
    {
        throw domain_error("Mathematical domain error");
    }
    catch (const exception& e)
    {
        cout << "domain_error: "
             << e.what() << endl;
    }


    try
    {
        throw length_error("Object is too long");
    }
    catch (const exception& e)
    {
        cout << "length_error: "
             << e.what() << endl;
    }


    try
    {
        throw out_of_range("Index out of range");
    }
    catch (const exception& e)
    {
        cout << "out_of_range: "
             << e.what() << endl;
    }


    try
    {
        throw runtime_error("Runtime error occurred");
    }
    catch (const exception& e)
    {
        cout << "runtime_error: "
             << e.what() << endl;
    }


    try
    {
        throw range_error("Range error");
    }
    catch (const exception& e)
    {
        cout << "range_error: "
             << e.what() << endl;
    }


    try
    {
        throw overflow_error("Arithmetic overflow");
    }
    catch (const exception& e)
    {
        cout << "overflow_error: "
             << e.what() << endl;
    }


    try
    {
        throw underflow_error("Arithmetic underflow");
    }
    catch (const exception& e)
    {
        cout << "underflow_error: "
             << e.what() << endl;
    }


    try
    {
        throw bad_alloc();
    }
    catch (const exception& e)
    {
        cout << "bad_alloc: "
             << e.what() << endl;
    }


    try
    {
        throw bad_cast();
    }
    catch (const exception& e)
    {
        cout << "bad_cast: "
             << e.what() << endl;
    }


    try
    {
        throw bad_typeid();
    }
    catch (const exception& e)
    {
        cout << "bad_typeid: "
             << e.what() << endl;
    }


    cout << endl;
    cout << "Program continues normally." << endl;

    return 0;
}