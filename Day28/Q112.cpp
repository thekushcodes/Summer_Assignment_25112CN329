// Program to create contact management system

#include <iostream>
#include <vector>
using namespace std;

struct Contact
{
    string name;
    string phone;
    string email;
};

void addContact(vector<Contact> &contacts)
{
    Contact c;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, c.name);

    cout << "Enter Phone Number: ";
    getline(cin, c.phone);

    cout << "Enter Email: ";
    getline(cin, c.email);

    contacts.push_back(c);

    cout << "Contact Added Successfully.\n";
}

void displayContacts(vector<Contact> &contacts)
{
    if (contacts.empty())
    {
        cout << "No Contacts Found.\n";
        return;
    }

    for (int i = 0; i < contacts.size(); i++)
    {
        cout << "\nContact " << i + 1 << endl;
        cout << "Name  : " << contacts[i].name << endl;
        cout << "Phone : " << contacts[i].phone << endl;
        cout << "Email : " << contacts[i].email << endl;
    }
}

void searchContact(vector<Contact> &contacts)
{
    string name;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    for (int i = 0; i < contacts.size(); i++)
    {
        if (contacts[i].name == name)
        {
            cout << "Contact Found\n";
            cout << "Name  : " << contacts[i].name << endl;
            cout << "Phone : " << contacts[i].phone << endl;
            cout << "Email : " << contacts[i].email << endl;
            return;
        }
    }

    cout << "Contact Not Found.\n";
}

void deleteContact(vector<Contact> &contacts)
{
    string name;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    for (int i = 0; i < contacts.size(); i++)
    {
        if (contacts[i].name == name)
        {
            contacts.erase(contacts.begin() + i);
            cout << "Contact Deleted Successfully.\n";
            return;
        }
    }

    cout << "Contact Not Found.\n";
}

int main()
{
    vector<Contact> contacts;
    int choice;

    do
    {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addContact(contacts);
            break;

        case 2:
            displayContacts(contacts);
            break;

        case 3:
            searchContact(contacts);
            break;

        case 4:
            deleteContact(contacts);
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