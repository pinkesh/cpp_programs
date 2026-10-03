#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    int left = 0;
    int right = text.length() - 1;

    bool palindrome = true;

    while (left < right)
    {
        if (text[left] != text[right])
        {
            palindrome = false;
            break;
        }

        left++;
        right--;
    }

    if (palindrome)
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;

    return 0;
}