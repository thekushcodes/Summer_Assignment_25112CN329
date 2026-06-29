// Program to create menu-driven string operating system

#include <iostream>
#include <string>
using namespace std;

string str;

void inputString()
{
    cin.ignore();

    cout << "Enter String: ";
    getline(cin, str);
}

void displayString()
{
    if (str.empty())
    {
        cout << "String is Empty.\n";
        return;
    }

    cout << "String: " << str << endl;
}

void stringLength()
{
    cout << "Length = " << str.length() << endl;
}

void reverseString()
{
    string rev = "";

    for (int i = str.length() - 1; i >= 0; i--)
    {
        rev += str[i];
    }

    cout << "Reversed String: " << rev << endl;
}

void concatenateString()
{
    string str2;

    cin.ignore();

    cout << "Enter Another String: ";
    getline(cin, str2);

    cout << "Concatenated String: " << str + str2 << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== String Operations System =====\n";
        cout << "1. Input String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length\n";
        cout << "4. Reverse String\n";
        cout << "5. Concatenate String\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            inputString();
            break;

        case 2:
            displayString();
            break;

        case 3:
            stringLength();
            break;

        case 4:
            reverseString();
            break;

        case 5:
            concatenateString();
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