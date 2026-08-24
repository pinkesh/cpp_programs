#include <iostream>
using namespace std;

const int SIZE = 10;

class ITEMS
{
private:
    int itemCode[SIZE];       // Array of item codes
    float itemPrice[SIZE];    // Array of item prices
    int count;                // Number of items

public:

    // Constructor
    ITEMS()
    {
        count = 0;
    }

    // Add item
    void getItem()
    {
        if (count >= SIZE)
        {
            cout << "Cannot add more items.\n";
            return;
        }

        cout << "Enter item code: ";
        cin >> itemCode[count];

        cout << "Enter item price: ";
        cin >> itemPrice[count];

        count++;

        cout << "Item added successfully.\n";
    }

    // Display total value
    void displaySum()
    {
        float total = 0;

        for (int i = 0; i < count; i++)
        {
            total = total + itemPrice[i];
        }

        cout << "Total value = " << total << "\n";
    }

    // Display all items
    void displayItems()
    {
        cout << "\nItem Code\tPrice\n";
        cout << "----------------------\n";

        for (int i = 0; i < count; i++)
        {
            cout << itemCode[i] << "\t\t"
                 << itemPrice[i] << "\n";
        }
    }

    // Delete an item
    void removeItem()
    {
        int code;
        cout << "Enter item code to delete: ";
        cin >> code;

        for (int i = 0; i < count; i++)
        {
            if (itemCode[i] == code)
            {
                // Shift remaining items
                for (int j = i; j < count - 1; j++)
                {
                    itemCode[j] = itemCode[j + 1];
                    itemPrice[j] = itemPrice[j + 1];
                }

                count--;

                cout << "Item deleted successfully.\n";
                return;
            }
        }

        cout << "Item not found.\n";
    }
};


// Main Program
int main()
{
    ITEMS order;

    int choice;

    do
    {
        cout << "\n\nMENU\n";
        cout << "1. Add an item\n";
        cout << "2. Display total value\n";
        cout << "3. Delete an item\n";
        cout << "4. Display all items\n";
        cout << "5. Quit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                order.getItem();
                break;

            case 2:
                order.displaySum();
                break;

            case 3:
                order.removeItem();
                break;

            case 4:
                order.displayItems();
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}