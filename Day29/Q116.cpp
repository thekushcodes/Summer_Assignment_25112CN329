// Program to create inventory management system

#include <iostream>
#include <vector>
using namespace std;

struct Item
{
    int id;
    string name;
    int quantity;
    float price;
};

void addItem(vector<Item> &inventory)
{
    Item i;

    cout << "Enter Item ID: ";
    cin >> i.id;

    cin.ignore();

    cout << "Enter Item Name: ";
    getline(cin, i.name);

    cout << "Enter Quantity: ";
    cin >> i.quantity;

    cout << "Enter Price: ";
    cin >> i.price;

    inventory.push_back(i);

    cout << "Item Added Successfully.\n";
}

void displayItems(vector<Item> &inventory)
{
    if (inventory.empty())
    {
        cout << "No Items Found.\n";
        return;
    }

    for (int i = 0; i < inventory.size(); i++)
    {
        cout << "\nItem " << i + 1 << endl;
        cout << "ID       : " << inventory[i].id << endl;
        cout << "Name     : " << inventory[i].name << endl;
        cout << "Quantity : " << inventory[i].quantity << endl;
        cout << "Price    : " << inventory[i].price << endl;
    }
}

void searchItem(vector<Item> &inventory)
{
    int id;

    cout << "Enter Item ID: ";
    cin >> id;

    for (int i = 0; i < inventory.size(); i++)
    {
        if (inventory[i].id == id)
        {
            cout << "Item Found\n";
            cout << "Name     : " << inventory[i].name << endl;
            cout << "Quantity : " << inventory[i].quantity << endl;
            cout << "Price    : " << inventory[i].price << endl;
            return;
        }
    }

    cout << "Item Not Found.\n";
}

void updateQuantity(vector<Item> &inventory)
{
    int id, qty;

    cout << "Enter Item ID: ";
    cin >> id;

    for (int i = 0; i < inventory.size(); i++)
    {
        if (inventory[i].id == id)
        {
            cout << "Enter New Quantity: ";
            cin >> qty;

            inventory[i].quantity = qty;

            cout << "Quantity Updated Successfully.\n";
            return;
        }
    }

    cout << "Item Not Found.\n";
}

int main()
{
    vector<Item> inventory;
    int choice;

    do
    {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Update Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addItem(inventory);
            break;

        case 2:
            displayItems(inventory);
            break;

        case 3:
            searchItem(inventory);
            break;

        case 4:
            updateQuantity(inventory);
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 5);

    return 0;
}