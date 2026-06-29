// Program to create menu-driven array operating system

#include <iostream>
using namespace std;

int arr[100], n = 0;

void createArray()
{
    cout << "Enter Number of Elements: ";
    cin >> n;

    cout << "Enter Elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void displayArray()
{
    if (n == 0)
    {
        cout << "Array is Empty.\n";
        return;
    }

    cout << "Array Elements: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void searchElement()
{
    int key;

    cout << "Enter Element to Search: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element Found at Position " << i + 1 << endl;
            return;
        }
    }

    cout << "Element Not Found.\n";
}

void insertElement()
{
    int pos, value;

    cout << "Enter Position: ";
    cin >> pos;

    cout << "Enter Value: ";
    cin >> value;

    if (pos < 1 || pos > n + 1)
    {
        cout << "Invalid Position.\n";
        return;
    }

    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    cout << "Element Inserted Successfully.\n";
}

void deleteElement()
{
    int pos;

    cout << "Enter Position: ";
    cin >> pos;

    if (pos < 1 || pos > n)
    {
        cout << "Invalid Position.\n";
        return;
    }

    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Element Deleted Successfully.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Array Operations System =====\n";
        cout << "1. Create Array\n";
        cout << "2. Display Array\n";
        cout << "3. Search Element\n";
        cout << "4. Insert Element\n";
        cout << "5. Delete Element\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            createArray();
            break;

        case 2:
            displayArray();
            break;

        case 3:
            searchElement();
            break;

        case 4:
            insertElement();
            break;

        case 5:
            deleteElement();
            break;

        case 6:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while (choice != 6);

    return 0;
}