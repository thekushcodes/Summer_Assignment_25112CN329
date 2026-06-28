// Program to create library management system

#include <iostream>
#include <vector>
using namespace std;

struct Book
{
    int id;
    string title;
    string author;
    bool issued;
};

void addBook(vector<Book> &library)
{
    Book b;

    cout << "Enter Book ID: ";
    cin >> b.id;

    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, b.title);

    cout << "Enter Author Name: ";
    getline(cin, b.author);

    b.issued = false;

    library.push_back(b);

    cout << "Book Added Successfully.\n";
}

void displayBooks(vector<Book> &library)
{
    if (library.empty())
    {
        cout << "No Books Available.\n";
        return;
    }

    for (int i = 0; i < library.size(); i++)
    {
        cout << "\nBook " << i + 1 << endl;
        cout << "ID : " << library[i].id << endl;
        cout << "Title : " << library[i].title << endl;
        cout << "Author : " << library[i].author << endl;
        cout << "Status : " << (library[i].issued ? "Issued" : "Available") << endl;
    }
}

void searchBook(vector<Book> &library)
{
    int id;
    cout << "Enter Book ID: ";
    cin >> id;

    for (int i = 0; i < library.size(); i++)
    {
        if (library[i].id == id)
        {
            cout << "Book Found\n";
            cout << "Title : " << library[i].title << endl;
            cout << "Author : " << library[i].author << endl;
            cout << "Status : " << (library[i].issued ? "Issued" : "Available") << endl;
            return;
        }
    }

    cout << "Book Not Found.\n";
}

void issueBook(vector<Book> &library)
{
    int id;
    cout << "Enter Book ID: ";
    cin >> id;

    for (int i = 0; i < library.size(); i++)
    {
        if (library[i].id == id)
        {
            if (library[i].issued)
                cout << "Book Already Issued.\n";
            else
            {
                library[i].issued = true;
                cout << "Book Issued Successfully.\n";
            }
            return;
        }
    }

    cout << "Book Not Found.\n";
}

void returnBook(vector<Book> &library)
{
    int id;
    cout << "Enter Book ID: ";
    cin >> id;

    for (int i = 0; i < library.size(); i++)
    {
        if (library[i].id == id)
        {
            if (!library[i].issued)
                cout << "Book Was Not Issued.\n";
            else
            {
                library[i].issued = false;
                cout << "Book Returned Successfully.\n";
            }
            return;
        }
    }

    cout << "Book Not Found.\n";
}

int main()
{
    vector<Book> library;
    int choice;

    do
    {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addBook(library);
            break;

        case 2:
            displayBooks(library);
            break;

        case 3:
            searchBook(library);
            break;

        case 4:
            issueBook(library);
            break;

        case 5:
            returnBook(library);
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