#include <iostream>
using namespace std;

class Library
{
private:
    string book[4];
    int price[4];
    int count;

public:
    Library()
    {
        count = 0;
    }

    void add(string b, int p)
    {
        if(count >= 4){
            cout << "Size too big" << endl;
        }
        else{
            book[count] = b;
            price[count] = p;
            count++;
        }
    }

    void show()
    {
        for(int i = 0; i < count; i++)
            cout << book[i] << " " << price[i] << endl;
    }
};

int main()
{
    Library l;
    l.add("C++", 500);
    l.add("OOP", 600);
    l.add("Hi", 300);
    l.add("Bye", 100);
    l.add("Error?", 3);
    l.show();
}